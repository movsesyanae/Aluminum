
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace Aluminum {


class  AluminumLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, LPAREN = 2, RPAREN = 3, EOL = 4, LCURL = 5, RCURL = 6, ARROW = 7, 
    DOR = 8, COMMA = 9, EQUALS = 10, TAKE = 11, SET = 12, MAIN = 13, IF = 14, 
    ELSE = 15, WHILE = 16, DEFINE = 17, FUNCTION = 18, VARIABLE = 19, INT = 20, 
    IDENTIFIER = 21, MUL = 22, DIV = 23, ADD = 24, SUB = 25, INT_LITERAL = 26, 
    WS = 27
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
