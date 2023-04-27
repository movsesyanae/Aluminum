
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "AluminumVisitor.h"


namespace Aluminum {

/**
 * This class provides an empty implementation of AluminumVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  AluminumBaseVisitor : public AluminumVisitor {
public:

  virtual std::any visitProgram(AluminumParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(AluminumParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_header(AluminumParser::Function_headerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(AluminumParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(AluminumParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_block(AluminumParser::If_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_block(AluminumParser::Else_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_block(AluminumParser::While_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_op(AluminumParser::Declare_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_op(AluminumParser::Set_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(AluminumParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call(AluminumParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(AluminumParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral_val(AluminumParser::Literal_valContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_val(AluminumParser::Var_valContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(AluminumParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_type(AluminumParser::Default_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCustom_type(AluminumParser::Custom_typeContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace Aluminum
