
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace Aluminum {


class  AluminumLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, LPAREN = 2, RPAREN = 3, EOL = 4, LCURL = 5, RCURL = 6, ARROW = 7, 
    DOT = 8, COMMA = 9, GREATEREQUAL = 10, GREATER = 11, LESSEQUAL = 12, 
    LESS = 13, NOT = 14, EQUALS = 15, TAKE = 16, SET = 17, MAIN = 18, IF = 19, 
    ELSE = 20, WHILE = 21, DEFINE = 22, FUNCTION = 23, VARIABLE = 24, INT = 25, 
    FLOAT = 26, BOOL = 27, TRUE = 28, FALSE = 29, IDENTIFIER = 30, MUL = 31, 
    DIV = 32, ADD = 33, SUB = 34, INT_LITERAL = 35, FLOAT_LITERAL = 36, 
    WS = 37
  };

  explicit AluminumLexer(antlr4::CharStream *input);

  ~AluminumLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace Aluminum
