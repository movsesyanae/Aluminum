
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "AluminumListener.h"


namespace Aluminum {

/**
 * This class provides an empty implementation of AluminumListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  AluminumBaseListener : public AluminumListener {
public:

  virtual void enterProgram(AluminumParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(AluminumParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunction(AluminumParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(AluminumParser::FunctionContext * /*ctx*/) override { }

  virtual void enterFunction_header(AluminumParser::Function_headerContext * /*ctx*/) override { }
  virtual void exitFunction_header(AluminumParser::Function_headerContext * /*ctx*/) override { }

  virtual void enterFunction_identifier(AluminumParser::Function_identifierContext * /*ctx*/) override { }
  virtual void exitFunction_identifier(AluminumParser::Function_identifierContext * /*ctx*/) override { }

  virtual void enterFunction_variables(AluminumParser::Function_variablesContext * /*ctx*/) override { }
  virtual void exitFunction_variables(AluminumParser::Function_variablesContext * /*ctx*/) override { }

  virtual void enterBlock(AluminumParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(AluminumParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(AluminumParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(AluminumParser::StatementContext * /*ctx*/) override { }

  virtual void enterIf_block(AluminumParser::If_blockContext * /*ctx*/) override { }
  virtual void exitIf_block(AluminumParser::If_blockContext * /*ctx*/) override { }

  virtual void enterElse_block(AluminumParser::Else_blockContext * /*ctx*/) override { }
  virtual void exitElse_block(AluminumParser::Else_blockContext * /*ctx*/) override { }

  virtual void enterWhile_block(AluminumParser::While_blockContext * /*ctx*/) override { }
  virtual void exitWhile_block(AluminumParser::While_blockContext * /*ctx*/) override { }

  virtual void enterDeclare_op(AluminumParser::Declare_opContext * /*ctx*/) override { }
  virtual void exitDeclare_op(AluminumParser::Declare_opContext * /*ctx*/) override { }

  virtual void enterSet_op(AluminumParser::Set_opContext * /*ctx*/) override { }
  virtual void exitSet_op(AluminumParser::Set_opContext * /*ctx*/) override { }

  virtual void enterExpression(AluminumParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(AluminumParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterFunction_call(AluminumParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(AluminumParser::Function_callContext * /*ctx*/) override { }

  virtual void enterValue(AluminumParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(AluminumParser::ValueContext * /*ctx*/) override { }

  virtual void enterLiteral_val(AluminumParser::Literal_valContext * /*ctx*/) override { }
  virtual void exitLiteral_val(AluminumParser::Literal_valContext * /*ctx*/) override { }

  virtual void enterVar_val(AluminumParser::Var_valContext * /*ctx*/) override { }
  virtual void exitVar_val(AluminumParser::Var_valContext * /*ctx*/) override { }

  virtual void enterType(AluminumParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(AluminumParser::TypeContext * /*ctx*/) override { }

  virtual void enterDefault_type(AluminumParser::Default_typeContext * /*ctx*/) override { }
  virtual void exitDefault_type(AluminumParser::Default_typeContext * /*ctx*/) override { }

  virtual void enterCustom_type(AluminumParser::Custom_typeContext * /*ctx*/) override { }
  virtual void exitCustom_type(AluminumParser::Custom_typeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace Aluminum
