//
// Created by Alexander Movsesyan on 4/18/23.
//
#include "antlr4-runtime.h"
//#include "llvm/IR/LLVMContext.h"
#include <AluminumVisitor.h>
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/APInt.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Transforms/InstCombine/InstCombine.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/Scalar/GVN.h"
#include "llvm/Transforms/Utils.h"

#define INT_BITS 32

using namespace llvm;
namespace Aluminum {
    class CustomAluminumVisitor : public Aluminum::AluminumVisitor {

    private:
        std::unique_ptr<LLVMContext> TheContext;
        std::unique_ptr<IRBuilder<>> Builder;
        std::unique_ptr<Module> TheModule;
        std::map<std::string, AllocaInst*> NamedValues;
//        static std::map<std::string, std::unique_ptr<PrototypeAST>> FunctionProtos;

        /// CreateEntryBlockAlloca - Create an alloca instruction in the entry block of
/// the function.  This is used for mutable variables etc.
        AllocaInst *CreateEntryBlockAlloca(Function *TheFunction, StringRef VarName, Type* VarType) {
            IRBuilder<> TmpB(&TheFunction->getEntryBlock(), TheFunction->getEntryBlock().begin());
            return TmpB.CreateAlloca(VarType, nullptr, VarName);
        }

        Function *getFunction(std::string& Name) {
            // First, see if the function has already been added to the current module.
            if (auto *F = TheModule->getFunction(Name))
                return F;
            // If no existing prototype exists, return null.
            return nullptr;
        }

        std::any LogError(const char *Str) {
            fprintf(stderr, "Error: %s\n", Str);
            return std::any();
        }

    public:
        CustomAluminumVisitor() {
            InitializeNativeTarget();
            InitializeNativeTargetAsmPrinter();
            InitializeNativeTargetAsmParser();


            TheContext = std::make_unique<LLVMContext>();
            TheModule = std::make_unique<Module>("my compiler", *TheContext);
            Builder = std::make_unique<IRBuilder<>>(*TheContext);

        }
        std::any visitProgram(Aluminum::AluminumParser::ProgramContext *context) override {
            std::cout << "in program" << std::endl;
            auto functions = context->function();
            std::cout << "num functions: " << functions.size() << std::endl;
            for(auto function: functions) {
                std::cout << "I see " << function->function_header()->function_identifier()->getText();
                visitFunction(function);
            }
//            Builder.
            return std::any();
        }

        std::any visitFunction(Aluminum::AluminumParser::FunctionContext *context) override {
            std::any temp_header = visitFunction_header(context->function_header());
            if(!temp_header.has_value()) {
                // somthing went wrong with the header
                return LogError("Error parsing function header");
            }
            // now we want to set up the variables and generate the function body
            Function* func = std::any_cast<Function*>(temp_header);
            // LLVM basic block to inject code into
            BasicBlock* block  = BasicBlock::Create(*TheContext, "entry", func);
            Builder->SetInsertPoint(block);

            // record the function arguments in the named_value map
            NamedValues.clear();
            for(auto &arg: func->args()) {
                // create allocation for variable
                AllocaInst* var = CreateEntryBlockAlloca(func, arg.getName(), Type::getInt32Ty(*TheContext));

                //store the value
                Builder->CreateStore(&arg, var);

                // add arguments to symbol table
                NamedValues[std::string(arg.getName())] = var;
            }

            return visitBlock(context->block());
        }




        std::any visitFunction_header(Aluminum::AluminumParser::Function_headerContext *context) override {
            // return name of function
            // get name of function
            std::any temp_id = visitFunction_identifier(context->function_identifier());
            if(!temp_id.has_value() ) {
                // error parsing function identifier
                std::cout << "error getting function identifier\n";
            }
            std::string func_id = std::any_cast<std::string>(temp_id);
            std::cout << "creating a function with name: " << func_id << std::endl;

            // defining the types of each argument in the function
            std::vector<Type*> func_arg_types;
            if(context->function_variables()) {
                for(auto var: context->function_variables()->type()) {
                    func_arg_types.push_back(Type::getInt32Ty(*TheContext));
                }
            }
            // define the functions return type
            Type* func_return_type = Type::getInt32Ty(*TheContext);

            // specifying to LLVM this function type
            FunctionType* func_type = FunctionType::get(func_return_type, func_arg_types, false);

            // telling LLVM to create this function
            Function* func = Function::Create(func_type, Function::ExternalLinkage, func_id, TheModule.get());

            //assigning the names for all the arguments in the function
            if(context->function_variables()) {
                int i = 0;
                for(auto &arg: func->args()){
                    arg.setName(context->function_variables()->IDENTIFIER(i++)->getText());
                }
            }

            // finished defining the function prototype to LLVM
            // now we return and define the function body outside
            return func;
        }

        std::any visitFunction_identifier(Aluminum::AluminumParser::Function_identifierContext *context) override {
            if(context->MAIN()) {
                return context->MAIN()->getText();
            } else if(context->IDENTIFIER()) {
                return context->IDENTIFIER()->getText();
            } else {
                return LogError("Function has bad name");
            }
        }

        std::any visitFunction_variables(AluminumParser::Function_variablesContext *context) override {
            return std::any();
        }

        std::any visitBlock(Aluminum::AluminumParser::BlockContext *context) override {
            return visitChildren(context);
        }

        std::any visitStatement(Aluminum::AluminumParser::StatementContext *context) override {
            return visitChildren(context);
        }

        std::any visitIf_block(Aluminum::AluminumParser::If_blockContext *context) override {
            return visitChildren(context);
        }

        std::any visitElse_block(Aluminum::AluminumParser::Else_blockContext *context) override {
            return visitChildren(context);
        }

        std::any visitWhile_block(Aluminum::AluminumParser::While_blockContext *context) override {
            return visitChildren(context);
        }

        std::any visitDeclare_op(Aluminum::AluminumParser::Declare_opContext *context) override {
            std::string var_name = context->IDENTIFIER()->getText();
            if(NamedValues[var_name]) {
                return LogError("A variable with this name was already declared");
            }
            Value* var_val;
            if(context->expression()) {
                // user set value for the variable
                std::any temp = visitExpression(context->expression());
                if(!temp.has_value()) {
                    return LogError("Error evaluating expression for declare operation");
                }
                var_val = std::any_cast<Value*>(temp);
            } else {
                var_val = ConstantInt::get(*TheContext, APInt(32,0, true));
            }

            AllocaInst* var_alloca = Builder->CreateAlloca(Type::getInt32Ty(*TheContext), nullptr, var_name);
            Builder->CreateStore(var_val, var_alloca);
            NamedValues[var_name] = var_alloca;
            std::cout << "created new var allocation (declaration)\n";
            return var_val;
        }

        std::any visitSet_op(Aluminum::AluminumParser::Set_opContext *context) override {
            std::cout << "in set operation\n";
            std::string var_name = context->IDENTIFIER()->getText();

            std::any temp = visitExpression(context->expression());
            if(!temp.has_value()) {
                return LogError("Could not resolve expression when setting variable");
            }
            Value* var_val = std::any_cast<Value*>(temp);

            Value* var_alloca = NamedValues[var_name];
            if(!var_alloca) {
                return LogError("trying to set variable that isn't declared");
            }
            Builder->CreateStore(var_val, var_alloca);
            std::cout << "successfully completed set operation\n";
            std::cout << "var name is " << var_name << " var val name is " << var_val->getName().str() << std::endl;
            return var_val;
        }

        std::any visitExpression(Aluminum::AluminumParser::ExpressionContext *context) override {
            std::cout << "in expression" << std::endl;
            if(context->value()) {
                return visitValue(context->value());
            } else if( context->LPAREN()) {
                return visitExpression(context->expression(0));
            } else if(context->function_call()) {
                return visitFunction_call(context->function_call());
            } else if(context->arith_op()){
                std::any temp_l = visitExpression(context->expression(0));
                std::any temp_r = visitExpression(context->expression(1));
                if(temp_l.has_value()) {
                    std::cout << "Expression l type is " << temp_l.type().name() << std::endl;
                }
                if(temp_r.has_value()) {
                    std::cout << "Expression r type is " << temp_r.type().name() << std::endl;
                }
                if(!temp_l.has_value() || !temp_r.has_value()) {
                    // error happened
                    return LogError("error in evaluating expression");
                }
                // extract values from std::any
                Value* l_val = std::any_cast<Value*>(temp_l);
                Value* r_val = std::any_cast<Value*>(temp_r);

                if(l_val->getType() != r_val->getType()) {
                    // error happened
                    // no implicit casting here
                    return LogError("tried arithmetic operation on mismatched types");
                }
                Value* ret_val;
                std::cout << "The rule index is " << context->arith_op()->getText() << std::endl;
                switch (context->arith_op()->getText()[0]) {
                    case '*':
                        // MUL
                        ret_val = Builder->CreateMul(l_val, r_val, "multmp");
                        break;
                    case '/':
                        // DIV
                        ret_val = Builder->CreateSDiv(l_val, r_val, "divtmp");
                        break;
                    case '+':
                        // ADD
                        ret_val = Builder->CreateAdd(l_val, r_val, "addtmp");
                        break;
                    case '-':
                        // Sub
                        ret_val = Builder->CreateSub(l_val, r_val, "subtmp");
                        break;
                    default:
                        // error happened
                        return LogError("arithop error");
                        break;
                }
                return ret_val;

            } else if(context->comp_op()) {
                return LogError("comparitive operations are not yet supported")
            }
            return visitChildren(context);
        }

        std::any visitFunction_call(Aluminum::AluminumParser::Function_callContext *context) override {
            std::string func_name = context->IDENTIFIER()->getText();
            Function* func = getFunction(func_name);
            if(!func) {
                return LogError("Tried calling function which hasn't been declared");
            }

//            if(context.)
            std::vector<Value*> func_args;
            Value* ret_val = Builder->CreateCall(func, func_args, "calltmp");
            return visitChildren(context);
        }

        std::any visitValue(Aluminum::AluminumParser::ValueContext *context) override {
            return visitChildren(context);
        }

        std::any visitLiteral_val(Aluminum::AluminumParser::Literal_valContext *context) override {
            Value* return_val;
            if(context->INT_LITERAL()) {
                std::cout << "returning int literal: " << context->INT_LITERAL()->getText() << std::endl;
                return_val = ConstantInt::get(*TheContext, APInt(INT_BITS, context->INT_LITERAL()->getText(), 10));
            }
            return return_val;
        }

        std::any visitVar_val(Aluminum::AluminumParser::Var_valContext *context) override {
            if(!context->IDENTIFIER()) {
                return LogError("Something went wrong trying to reference a variable");
            }
            std::string var_id = context->IDENTIFIER()->getText();
            std::cout << "referencing var: " << var_id << std::endl;
            AllocaInst* var = NamedValues[var_id];
            if(!var) {
                return LogError("Unknown variable referenced");
            }
            Value* ret_val =  Builder->CreateLoad(var->getAllocatedType(), var, var_id.c_str());
            return ret_val;
        }

        std::any visitType(Aluminum::AluminumParser::TypeContext *context) override {
            return visitChildren(context);
        }

        std::any visitDefault_type(Aluminum::AluminumParser::Default_typeContext *context) override {
            return visitChildren(context);
        }

        std::any visitCustom_type(Aluminum::AluminumParser::Custom_typeContext *context) override {
            return visitChildren(context);
        }

        std::any visitArith_op(AluminumParser::Arith_opContext *context) override {
            return std::any();
        }

        std::any visitComp_op(AluminumParser::Comp_opContext *context) override {
            return std::any();
        }
    };
}
