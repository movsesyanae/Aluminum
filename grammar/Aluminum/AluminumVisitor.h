
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "AluminumParser.h"


namespace Aluminum {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by AluminumParser.
 */
class  AluminumVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AluminumParser.
   */
    virtual std::any visitProgram(AluminumParser::ProgramContext *context) = 0;

    virtual std::any visitFunction(AluminumParser::FunctionContext *context) = 0;

    virtual std::any visitFunction_header(AluminumParser::Function_headerContext *context) = 0;

    virtual std::any visitBlock(AluminumParser::BlockContext *context) = 0;

    virtual std::any visitStatement(AluminumParser::StatementContext *context) = 0;

    virtual std::any visitIf_block(AluminumParser::If_blockContext *context) = 0;

    virtual std::any visitElse_block(AluminumParser::Else_blockContext *context) = 0;

    virtual std::any visitWhile_block(AluminumParser::While_blockContext *context) = 0;

    virtual std::any visitDeclare_op(AluminumParser::Declare_opContext *context) = 0;

    virtual std::any visitSet_op(AluminumParser::Set_opContext *context) = 0;

    virtual std::any visitExpression(AluminumParser::ExpressionContext *context) = 0;

    virtual std::any visitFunction_call(AluminumParser::Function_callContext *context) = 0;

    virtual std::any visitValue(AluminumParser::ValueContext *context) = 0;

    virtual std::any visitLiteral_val(AluminumParser::Literal_valContext *context) = 0;

    virtual std::any visitVar_val(AluminumParser::Var_valContext *context) = 0;

    virtual std::any visitType(AluminumParser::TypeContext *context) = 0;

    virtual std::any visitDefault_type(AluminumParser::Default_typeContext *context) = 0;

    virtual std::any visitCustom_type(AluminumParser::Custom_typeContext *context) = 0;


};

}  // namespace Aluminum
