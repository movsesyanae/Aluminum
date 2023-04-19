
// Generated from /Users/movsesyanae/Programming/CMSC838E/Aluminum/front_end/Aluminum.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace front_end {


class  AluminumLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, LPAREN = 2, RPAREN = 3, EOL = 4, LCURL = 5, RCURL = 6, ARROW = 7, 
    DOR = 8, EQUALS = 9, TAKE = 10, SET = 11, MAIN = 12, IF = 13, ELSE = 14, 
    WHILE = 15, DEFINE = 16, FUNCTION = 17, VARIABLE = 18, INT = 19, IDENTIFIER = 20, 
    MUL = 21, DIV = 22, ADD = 23, SUB = 24, INT_LITERAL = 25, WS = 26
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

}  // namespace front_end
