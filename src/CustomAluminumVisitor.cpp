//
// Created by Alexander Movsesyan on 4/18/23.
//
#include "antlr4-runtime.h"
#include <AluminumVisitor.h>
#include "llvm/ADT/APFloat.h"
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

namespace Aluminum {
    class CustomAluminumVisitor : public Aluminum::AluminumVisitor {
    public:
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
            return visitChildren(context);
        }

        std::any visitExpression(Aluminum::AluminumParser::ExpressionContext *context) override {
            return visitChildren(context);
        }

        std::any visitFunction_call(Aluminum::AluminumParser::Function_callContext *context) override {
            return visitChildren(context);
        }

        std::any visitValue(Aluminum::AluminumParser::ValueContext *context) override {
            return visitChildren(context);
        }

        std::any visitLiteral_val(Aluminum::AluminumParser::Literal_valContext *context) override {
            return visitChildren(context);
        }

        std::any visitVar_val(Aluminum::AluminumParser::Var_valContext *context) override {
            return visitChildren(context);
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
    };
}
