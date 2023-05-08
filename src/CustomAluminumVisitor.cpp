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
        std::map<std::string, Value *> NamedValues;

        /// CreateEntryBlockAlloca - Create an alloca instruction in the entry block of
/// the function.  This is used for mutable variables etc.
        AllocaInst *CreateEntryBlockAlloca(Function *TheFunction, const std::string &VarName) {
            IRBuilder<> TmpB(&TheFunction->getEntryBlock(), TheFunction->getEntryBlock().begin());
            return TmpB.CreateAlloca(Type::getInt32Ty(*TheContext), nullptr, VarName);
        }

        std::any LogError(const char *Str) {
            fprintf(stderr, "Error: %s\n", Str);
            return nullptr;
        }

    public:
        CustomAluminumVisitor() {
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
            return std::any();
        }

        std::any visitFunction(Aluminum::AluminumParser::FunctionContext *context) override {
            std::cout << "in function" << std::endl;
            return visitChildren(context);
        }

        std::any visitFunction_header(Aluminum::AluminumParser::Function_headerContext *context) override {
            return visitChildren(context);
        }

        std::any visitFunction_identifier(Aluminum::AluminumParser::Function_identifierContext *context) override {
            return visitChildren(context);
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
            return visitChildren(context);
        }

        std::any visitSet_op(Aluminum::AluminumParser::Set_opContext *context) override {
            std::cout << "in set operation\n";
            std::any temp = visitExpression(context->expression());
            if(temp.has_value() && temp.type() != typeid(nullptr)) {
                std::cout << "got type: " << temp.type().name() << std::endl;
                std::cout << "Is llvm value: " << (temp.type() == typeid(Value*)) << std::endl;
            } else {
                std::cout << "got nothing back\n";
            }
            return NULL;
        }

        std::any visitExpression(Aluminum::AluminumParser::ExpressionContext *context) override {
            std::cout << "in expression" << std::endl;
            if(context->value()) {
                return visitValue(context->value());
            } else if( context->LPAREN()) {
                return visitExpression(context->expression(0));
            } else if(context->function_call()) {
                // do later
            } else if(context->arith_op()){
                std::any temp_l = visitExpression(context->expression(0));
                std::any temp_r = visitExpression(context->expression(1));
                if(!temp_l.has_value() || !temp_r.has_value() || !(temp_l.type() == typeid(Value*)) || !(temp_r.type() == typeid(Value*))) {
                    // error happened
                    LogError("error in evaluating expression");
                }
                // extract values from std::any
                Value* l_val = std::any_cast<Value*>(temp_l);
                Value* r_val = std::any_cast<Value*>(temp_r);
                if(l_val->getType() != r_val->getType()) {
                    // error happened
                    // no implicit casting here
                    return LogError("tried arithmetic operation on mismatched types");
                }
                switch (context->arith_op()->getRuleIndex()) {
                    case 0:
                        // MUL
                        return Builder->CreateMul(l_val, r_val, "multmp");
                        break;
                    case 1:
                        // DIV
                        return Builder->CreateSDiv(l_val, r_val, "divtmp");
                        break;
                    case 2:
                        // ADD
                        return Builder->CreateAdd(l_val, r_val, "addtmp");
                        break;
                    case 3:
                        // Sub
                        return Builder->CreateSub(l_val, r_val, "subtmp");
                    default:
                        // error happened
                        return LogError("arithop error");

                }

            } else if(context->comp_op()) {

            }
            return visitChildren(context);
        }

        std::any visitFunction_call(Aluminum::AluminumParser::Function_callContext *context) override {
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
            return nullptr;
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
