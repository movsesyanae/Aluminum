
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace Aluminum {


class  AluminumLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, LPAREN = 2, RPAREN = 3, EOL = 4, LCURL = 5, RCURL = 6, ARROW = 7, 
    DOR = 8, COMMA = 9, GREATEREQUAL = 10, GREATER = 11, LESSEQUAL = 12, 
    LESS = 13, EQUALS = 14, TAKE = 15, SET = 16, MAIN = 17, IF = 18, ELSE = 19, 
    WHILE = 20, DEFINE = 21, FUNCTION = 22, VARIABLE = 23, INT = 24, IDENTIFIER = 25, 
    MUL = 26, DIV = 27, ADD = 28, SUB = 29, INT_LITERAL = 30, WS = 31
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
