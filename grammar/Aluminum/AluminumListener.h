
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "AluminumParser.h"


namespace Aluminum {

/**
 * This interface defines an abstract listener for a parse tree produced by AluminumParser.
 */
class  AluminumListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(AluminumParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(AluminumParser::ProgramContext *ctx) = 0;

  virtual void enterFunction(AluminumParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(AluminumParser::FunctionContext *ctx) = 0;

  virtual void enterFunction_header(AluminumParser::Function_headerContext *ctx) = 0;
  virtual void exitFunction_header(AluminumParser::Function_headerContext *ctx) = 0;

  virtual void enterFunction_identifier(AluminumParser::Function_identifierContext *ctx) = 0;
  virtual void exitFunction_identifier(AluminumParser::Function_identifierContext *ctx) = 0;

  virtual void enterFunction_variables(AluminumParser::Function_variablesContext *ctx) = 0;
  virtual void exitFunction_variables(AluminumParser::Function_variablesContext *ctx) = 0;

  virtual void enterBlock(AluminumParser::BlockContext *ctx) = 0;
  virtual void exitBlock(AluminumParser::BlockContext *ctx) = 0;

  virtual void enterStatement(AluminumParser::StatementContext *ctx) = 0;
  virtual void exitStatement(AluminumParser::StatementContext *ctx) = 0;

  virtual void enterIf_block(AluminumParser::If_blockContext *ctx) = 0;
  virtual void exitIf_block(AluminumParser::If_blockContext *ctx) = 0;

  virtual void enterElse_block(AluminumParser::Else_blockContext *ctx) = 0;
  virtual void exitElse_block(AluminumParser::Else_blockContext *ctx) = 0;

  virtual void enterWhile_block(AluminumParser::While_blockContext *ctx) = 0;
  virtual void exitWhile_block(AluminumParser::While_blockContext *ctx) = 0;

  virtual void enterDeclare_op(AluminumParser::Declare_opContext *ctx) = 0;
  virtual void exitDeclare_op(AluminumParser::Declare_opContext *ctx) = 0;

  virtual void enterSet_op(AluminumParser::Set_opContext *ctx) = 0;
  virtual void exitSet_op(AluminumParser::Set_opContext *ctx) = 0;

  virtual void enterExpression(AluminumParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(AluminumParser::ExpressionContext *ctx) = 0;

  virtual void enterArith_op(AluminumParser::Arith_opContext *ctx) = 0;
  virtual void exitArith_op(AluminumParser::Arith_opContext *ctx) = 0;

  virtual void enterComp_op(AluminumParser::Comp_opContext *ctx) = 0;
  virtual void exitComp_op(AluminumParser::Comp_opContext *ctx) = 0;

  virtual void enterFunction_call(AluminumParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(AluminumParser::Function_callContext *ctx) = 0;

  virtual void enterValue(AluminumParser::ValueContext *ctx) = 0;
  virtual void exitValue(AluminumParser::ValueContext *ctx) = 0;

  virtual void enterLiteral_val(AluminumParser::Literal_valContext *ctx) = 0;
  virtual void exitLiteral_val(AluminumParser::Literal_valContext *ctx) = 0;

  virtual void enterVar_val(AluminumParser::Var_valContext *ctx) = 0;
  virtual void exitVar_val(AluminumParser::Var_valContext *ctx) = 0;

  virtual void enterType(AluminumParser::TypeContext *ctx) = 0;
  virtual void exitType(AluminumParser::TypeContext *ctx) = 0;

  virtual void enterDefault_type(AluminumParser::Default_typeContext *ctx) = 0;
  virtual void exitDefault_type(AluminumParser::Default_typeContext *ctx) = 0;

  virtual void enterCustom_type(AluminumParser::Custom_typeContext *ctx) = 0;
  virtual void exitCustom_type(AluminumParser::Custom_typeContext *ctx) = 0;


};

}  // namespace Aluminum
