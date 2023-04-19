
// Generated from /Users/movsesyanae/Programming/CMSC838E/Aluminum/front_end/Aluminum.g4 by ANTLR 4.12.0


#include "AluminumListener.h"
#include "AluminumVisitor.h"

#include "AluminumParser.h"


using namespace antlrcpp;
using namespace front_end;

using namespace antlr4;

namespace {

struct AluminumParserStaticData final {
  AluminumParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AluminumParserStaticData(const AluminumParserStaticData&) = delete;
  AluminumParserStaticData(AluminumParserStaticData&&) = delete;
  AluminumParserStaticData& operator=(const AluminumParserStaticData&) = delete;
  AluminumParserStaticData& operator=(AluminumParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag aluminumParserOnceFlag;
AluminumParserStaticData *aluminumParserStaticData = nullptr;

void aluminumParserInitialize() {
  assert(aluminumParserStaticData == nullptr);
  auto staticData = std::make_unique<AluminumParserStaticData>(
    std::vector<std::string>{
      "program", "function", "function_header", "block", "statement", "if_block", 
      "else_block", "while_block", "declare_op", "set_op", "expression", 
      "function_call", "value", "literal_val", "var_val", "type", "default_type", 
      "custom_type"
    },
    std::vector<std::string>{
      "", "'cust'", "'('", "')'", "';'", "'{'", "'}'", "'->'", "'.'", "'='", 
      "'take'", "'set'", "'main'", "'if'", "'else'", "'while'", "'def'", 
      "'func'", "'var'", "'int'", "", "'*'", "'/'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOR", 
      "EQUALS", "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", 
      "FUNCTION", "VARIABLE", "INT", "IDENTIFIER", "MUL", "DIV", "ADD", 
      "SUB", "INT_LITERAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,26,157,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,4,0,38,8,0,11,0,12,0,39,1,1,1,1,
  	1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,52,8,2,1,3,1,3,5,3,56,8,3,10,3,12,
  	3,59,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,74,8,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,82,8,5,1,6,1,6,1,6,3,6,87,8,6,1,7,1,7,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,3,8,100,8,8,1,9,1,9,1,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,3,10,114,8,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,5,10,132,8,10,
  	10,10,12,10,135,9,10,1,11,1,11,1,11,1,11,1,12,1,12,3,12,143,8,12,1,13,
  	1,13,1,14,1,14,1,15,1,15,3,15,151,8,15,1,16,1,16,1,17,1,17,1,17,0,1,20,
  	18,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,0,1,2,0,12,12,20,
  	20,157,0,37,1,0,0,0,2,41,1,0,0,0,4,44,1,0,0,0,6,53,1,0,0,0,8,73,1,0,0,
  	0,10,75,1,0,0,0,12,83,1,0,0,0,14,88,1,0,0,0,16,94,1,0,0,0,18,101,1,0,
  	0,0,20,113,1,0,0,0,22,136,1,0,0,0,24,142,1,0,0,0,26,144,1,0,0,0,28,146,
  	1,0,0,0,30,150,1,0,0,0,32,152,1,0,0,0,34,154,1,0,0,0,36,38,3,2,1,0,37,
  	36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,1,1,0,0,0,41,
  	42,3,4,2,0,42,43,3,6,3,0,43,3,1,0,0,0,44,45,5,16,0,0,45,46,5,17,0,0,46,
  	47,7,0,0,0,47,48,5,2,0,0,48,51,5,3,0,0,49,50,5,7,0,0,50,52,3,30,15,0,
  	51,49,1,0,0,0,51,52,1,0,0,0,52,5,1,0,0,0,53,57,5,5,0,0,54,56,3,8,4,0,
  	55,54,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,58,1,0,0,0,58,60,1,0,0,0,
  	59,57,1,0,0,0,60,61,5,6,0,0,61,7,1,0,0,0,62,63,3,16,8,0,63,64,5,4,0,0,
  	64,74,1,0,0,0,65,66,3,18,9,0,66,67,5,4,0,0,67,74,1,0,0,0,68,69,3,20,10,
  	0,69,70,5,4,0,0,70,74,1,0,0,0,71,74,3,10,5,0,72,74,3,14,7,0,73,62,1,0,
  	0,0,73,65,1,0,0,0,73,68,1,0,0,0,73,71,1,0,0,0,73,72,1,0,0,0,74,9,1,0,
  	0,0,75,76,5,13,0,0,76,77,5,2,0,0,77,78,3,20,10,0,78,79,5,3,0,0,79,81,
  	3,6,3,0,80,82,3,12,6,0,81,80,1,0,0,0,81,82,1,0,0,0,82,11,1,0,0,0,83,86,
  	5,14,0,0,84,87,3,10,5,0,85,87,3,6,3,0,86,84,1,0,0,0,86,85,1,0,0,0,87,
  	13,1,0,0,0,88,89,5,15,0,0,89,90,5,2,0,0,90,91,3,20,10,0,91,92,5,3,0,0,
  	92,93,3,6,3,0,93,15,1,0,0,0,94,95,5,10,0,0,95,96,3,30,15,0,96,99,5,20,
  	0,0,97,98,5,9,0,0,98,100,3,20,10,0,99,97,1,0,0,0,99,100,1,0,0,0,100,17,
  	1,0,0,0,101,102,5,11,0,0,102,103,5,20,0,0,103,104,5,9,0,0,104,105,3,20,
  	10,0,105,19,1,0,0,0,106,107,6,10,-1,0,107,114,3,24,12,0,108,109,5,2,0,
  	0,109,110,3,20,10,0,110,111,5,3,0,0,111,114,1,0,0,0,112,114,3,22,11,0,
  	113,106,1,0,0,0,113,108,1,0,0,0,113,112,1,0,0,0,114,133,1,0,0,0,115,116,
  	10,5,0,0,116,117,5,9,0,0,117,118,5,9,0,0,118,132,3,20,10,6,119,120,10,
  	4,0,0,120,121,5,21,0,0,121,132,3,20,10,5,122,123,10,3,0,0,123,124,5,22,
  	0,0,124,132,3,20,10,4,125,126,10,2,0,0,126,127,5,23,0,0,127,132,3,20,
  	10,3,128,129,10,1,0,0,129,130,5,24,0,0,130,132,3,20,10,2,131,115,1,0,
  	0,0,131,119,1,0,0,0,131,122,1,0,0,0,131,125,1,0,0,0,131,128,1,0,0,0,132,
  	135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,21,1,0,0,0,135,133,1,
  	0,0,0,136,137,5,20,0,0,137,138,5,2,0,0,138,139,5,3,0,0,139,23,1,0,0,0,
  	140,143,3,26,13,0,141,143,3,28,14,0,142,140,1,0,0,0,142,141,1,0,0,0,143,
  	25,1,0,0,0,144,145,5,25,0,0,145,27,1,0,0,0,146,147,5,20,0,0,147,29,1,
  	0,0,0,148,151,3,32,16,0,149,151,3,34,17,0,150,148,1,0,0,0,150,149,1,0,
  	0,0,151,31,1,0,0,0,152,153,5,19,0,0,153,33,1,0,0,0,154,155,5,1,0,0,155,
  	35,1,0,0,0,12,39,51,57,73,81,86,99,113,131,133,142,150
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  aluminumParserStaticData = staticData.release();
}

}

AluminumParser::AluminumParser(TokenStream *input) : AluminumParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

AluminumParser::AluminumParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  AluminumParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *aluminumParserStaticData->atn, aluminumParserStaticData->decisionToDFA, aluminumParserStaticData->sharedContextCache, options);
}

AluminumParser::~AluminumParser() {
  delete _interpreter;
}

const atn::ATN& AluminumParser::getATN() const {
  return *aluminumParserStaticData->atn;
}

std::string AluminumParser::getGrammarFileName() const {
  return "Aluminum.g4";
}

const std::vector<std::string>& AluminumParser::getRuleNames() const {
  return aluminumParserStaticData->ruleNames;
}

const dfa::Vocabulary& AluminumParser::getVocabulary() const {
  return aluminumParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AluminumParser::getSerializedATN() const {
  return aluminumParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

AluminumParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AluminumParser::FunctionContext *> AluminumParser::ProgramContext::function() {
  return getRuleContexts<AluminumParser::FunctionContext>();
}

AluminumParser::FunctionContext* AluminumParser::ProgramContext::function(size_t i) {
  return getRuleContext<AluminumParser::FunctionContext>(i);
}


size_t AluminumParser::ProgramContext::getRuleIndex() const {
  return AluminumParser::RuleProgram;
}

void AluminumParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void AluminumParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any AluminumParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::ProgramContext* AluminumParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, AluminumParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(36);
      function();
      setState(39); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AluminumParser::DEFINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

AluminumParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AluminumParser::Function_headerContext* AluminumParser::FunctionContext::function_header() {
  return getRuleContext<AluminumParser::Function_headerContext>(0);
}

AluminumParser::BlockContext* AluminumParser::FunctionContext::block() {
  return getRuleContext<AluminumParser::BlockContext>(0);
}


size_t AluminumParser::FunctionContext::getRuleIndex() const {
  return AluminumParser::RuleFunction;
}

void AluminumParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void AluminumParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any AluminumParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::FunctionContext* AluminumParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, AluminumParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    function_header();
    setState(42);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_headerContext ------------------------------------------------------------------

AluminumParser::Function_headerContext::Function_headerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Function_headerContext::DEFINE() {
  return getToken(AluminumParser::DEFINE, 0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::FUNCTION() {
  return getToken(AluminumParser::FUNCTION, 0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::LPAREN() {
  return getToken(AluminumParser::LPAREN, 0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::RPAREN() {
  return getToken(AluminumParser::RPAREN, 0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::MAIN() {
  return getToken(AluminumParser::MAIN, 0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::IDENTIFIER() {
  return getToken(AluminumParser::IDENTIFIER, 0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::ARROW() {
  return getToken(AluminumParser::ARROW, 0);
}

AluminumParser::TypeContext* AluminumParser::Function_headerContext::type() {
  return getRuleContext<AluminumParser::TypeContext>(0);
}


size_t AluminumParser::Function_headerContext::getRuleIndex() const {
  return AluminumParser::RuleFunction_header;
}

void AluminumParser::Function_headerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_header(this);
}

void AluminumParser::Function_headerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_header(this);
}


std::any AluminumParser::Function_headerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitFunction_header(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Function_headerContext* AluminumParser::function_header() {
  Function_headerContext *_localctx = _tracker.createInstance<Function_headerContext>(_ctx, getState());
  enterRule(_localctx, 4, AluminumParser::RuleFunction_header);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(AluminumParser::DEFINE);
    setState(45);
    match(AluminumParser::FUNCTION);
    setState(46);
    _la = _input->LA(1);
    if (!(_la == AluminumParser::MAIN

    || _la == AluminumParser::IDENTIFIER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(47);
    match(AluminumParser::LPAREN);
    setState(48);
    match(AluminumParser::RPAREN);
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::ARROW) {
      setState(49);
      match(AluminumParser::ARROW);
      setState(50);
      type();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

AluminumParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::BlockContext::LCURL() {
  return getToken(AluminumParser::LCURL, 0);
}

tree::TerminalNode* AluminumParser::BlockContext::RCURL() {
  return getToken(AluminumParser::RCURL, 0);
}

std::vector<AluminumParser::StatementContext *> AluminumParser::BlockContext::statement() {
  return getRuleContexts<AluminumParser::StatementContext>();
}

AluminumParser::StatementContext* AluminumParser::BlockContext::statement(size_t i) {
  return getRuleContext<AluminumParser::StatementContext>(i);
}


size_t AluminumParser::BlockContext::getRuleIndex() const {
  return AluminumParser::RuleBlock;
}

void AluminumParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void AluminumParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any AluminumParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::BlockContext* AluminumParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, AluminumParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(AluminumParser::LCURL);
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34647044) != 0)) {
      setState(54);
      statement();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(60);
    match(AluminumParser::RCURL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AluminumParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AluminumParser::Declare_opContext* AluminumParser::StatementContext::declare_op() {
  return getRuleContext<AluminumParser::Declare_opContext>(0);
}

tree::TerminalNode* AluminumParser::StatementContext::EOL() {
  return getToken(AluminumParser::EOL, 0);
}

AluminumParser::Set_opContext* AluminumParser::StatementContext::set_op() {
  return getRuleContext<AluminumParser::Set_opContext>(0);
}

AluminumParser::ExpressionContext* AluminumParser::StatementContext::expression() {
  return getRuleContext<AluminumParser::ExpressionContext>(0);
}

AluminumParser::If_blockContext* AluminumParser::StatementContext::if_block() {
  return getRuleContext<AluminumParser::If_blockContext>(0);
}

AluminumParser::While_blockContext* AluminumParser::StatementContext::while_block() {
  return getRuleContext<AluminumParser::While_blockContext>(0);
}


size_t AluminumParser::StatementContext::getRuleIndex() const {
  return AluminumParser::RuleStatement;
}

void AluminumParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void AluminumParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any AluminumParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::StatementContext* AluminumParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, AluminumParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::TAKE: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        declare_op();
        setState(63);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::SET: {
        enterOuterAlt(_localctx, 2);
        setState(65);
        set_op();
        setState(66);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::LPAREN:
      case AluminumParser::IDENTIFIER:
      case AluminumParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(68);
        expression(0);
        setState(69);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(71);
        if_block();
        break;
      }

      case AluminumParser::WHILE: {
        enterOuterAlt(_localctx, 5);
        setState(72);
        while_block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_blockContext ------------------------------------------------------------------

AluminumParser::If_blockContext::If_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::If_blockContext::IF() {
  return getToken(AluminumParser::IF, 0);
}

tree::TerminalNode* AluminumParser::If_blockContext::LPAREN() {
  return getToken(AluminumParser::LPAREN, 0);
}

AluminumParser::ExpressionContext* AluminumParser::If_blockContext::expression() {
  return getRuleContext<AluminumParser::ExpressionContext>(0);
}

tree::TerminalNode* AluminumParser::If_blockContext::RPAREN() {
  return getToken(AluminumParser::RPAREN, 0);
}

AluminumParser::BlockContext* AluminumParser::If_blockContext::block() {
  return getRuleContext<AluminumParser::BlockContext>(0);
}

AluminumParser::Else_blockContext* AluminumParser::If_blockContext::else_block() {
  return getRuleContext<AluminumParser::Else_blockContext>(0);
}


size_t AluminumParser::If_blockContext::getRuleIndex() const {
  return AluminumParser::RuleIf_block;
}

void AluminumParser::If_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_block(this);
}

void AluminumParser::If_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_block(this);
}


std::any AluminumParser::If_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitIf_block(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::If_blockContext* AluminumParser::if_block() {
  If_blockContext *_localctx = _tracker.createInstance<If_blockContext>(_ctx, getState());
  enterRule(_localctx, 10, AluminumParser::RuleIf_block);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(AluminumParser::IF);
    setState(76);
    match(AluminumParser::LPAREN);
    setState(77);
    expression(0);
    setState(78);
    match(AluminumParser::RPAREN);
    setState(79);
    block();
    setState(81);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::ELSE) {
      setState(80);
      else_block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_blockContext ------------------------------------------------------------------

AluminumParser::Else_blockContext::Else_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Else_blockContext::ELSE() {
  return getToken(AluminumParser::ELSE, 0);
}

AluminumParser::If_blockContext* AluminumParser::Else_blockContext::if_block() {
  return getRuleContext<AluminumParser::If_blockContext>(0);
}

AluminumParser::BlockContext* AluminumParser::Else_blockContext::block() {
  return getRuleContext<AluminumParser::BlockContext>(0);
}


size_t AluminumParser::Else_blockContext::getRuleIndex() const {
  return AluminumParser::RuleElse_block;
}

void AluminumParser::Else_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_block(this);
}

void AluminumParser::Else_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_block(this);
}


std::any AluminumParser::Else_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitElse_block(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Else_blockContext* AluminumParser::else_block() {
  Else_blockContext *_localctx = _tracker.createInstance<Else_blockContext>(_ctx, getState());
  enterRule(_localctx, 12, AluminumParser::RuleElse_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(AluminumParser::ELSE);
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::IF: {
        setState(84);
        if_block();
        break;
      }

      case AluminumParser::LCURL: {
        setState(85);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_blockContext ------------------------------------------------------------------

AluminumParser::While_blockContext::While_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::While_blockContext::WHILE() {
  return getToken(AluminumParser::WHILE, 0);
}

tree::TerminalNode* AluminumParser::While_blockContext::LPAREN() {
  return getToken(AluminumParser::LPAREN, 0);
}

AluminumParser::ExpressionContext* AluminumParser::While_blockContext::expression() {
  return getRuleContext<AluminumParser::ExpressionContext>(0);
}

tree::TerminalNode* AluminumParser::While_blockContext::RPAREN() {
  return getToken(AluminumParser::RPAREN, 0);
}

AluminumParser::BlockContext* AluminumParser::While_blockContext::block() {
  return getRuleContext<AluminumParser::BlockContext>(0);
}


size_t AluminumParser::While_blockContext::getRuleIndex() const {
  return AluminumParser::RuleWhile_block;
}

void AluminumParser::While_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_block(this);
}

void AluminumParser::While_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_block(this);
}


std::any AluminumParser::While_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitWhile_block(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::While_blockContext* AluminumParser::while_block() {
  While_blockContext *_localctx = _tracker.createInstance<While_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, AluminumParser::RuleWhile_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(AluminumParser::WHILE);
    setState(89);
    match(AluminumParser::LPAREN);
    setState(90);
    expression(0);
    setState(91);
    match(AluminumParser::RPAREN);
    setState(92);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declare_opContext ------------------------------------------------------------------

AluminumParser::Declare_opContext::Declare_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Declare_opContext::TAKE() {
  return getToken(AluminumParser::TAKE, 0);
}

AluminumParser::TypeContext* AluminumParser::Declare_opContext::type() {
  return getRuleContext<AluminumParser::TypeContext>(0);
}

tree::TerminalNode* AluminumParser::Declare_opContext::IDENTIFIER() {
  return getToken(AluminumParser::IDENTIFIER, 0);
}

tree::TerminalNode* AluminumParser::Declare_opContext::EQUALS() {
  return getToken(AluminumParser::EQUALS, 0);
}

AluminumParser::ExpressionContext* AluminumParser::Declare_opContext::expression() {
  return getRuleContext<AluminumParser::ExpressionContext>(0);
}


size_t AluminumParser::Declare_opContext::getRuleIndex() const {
  return AluminumParser::RuleDeclare_op;
}

void AluminumParser::Declare_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclare_op(this);
}

void AluminumParser::Declare_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclare_op(this);
}


std::any AluminumParser::Declare_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitDeclare_op(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Declare_opContext* AluminumParser::declare_op() {
  Declare_opContext *_localctx = _tracker.createInstance<Declare_opContext>(_ctx, getState());
  enterRule(_localctx, 16, AluminumParser::RuleDeclare_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(AluminumParser::TAKE);
    setState(95);
    type();
    setState(96);
    match(AluminumParser::IDENTIFIER);
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::EQUALS) {
      setState(97);
      match(AluminumParser::EQUALS);
      setState(98);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_opContext ------------------------------------------------------------------

AluminumParser::Set_opContext::Set_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Set_opContext::SET() {
  return getToken(AluminumParser::SET, 0);
}

tree::TerminalNode* AluminumParser::Set_opContext::IDENTIFIER() {
  return getToken(AluminumParser::IDENTIFIER, 0);
}

tree::TerminalNode* AluminumParser::Set_opContext::EQUALS() {
  return getToken(AluminumParser::EQUALS, 0);
}

AluminumParser::ExpressionContext* AluminumParser::Set_opContext::expression() {
  return getRuleContext<AluminumParser::ExpressionContext>(0);
}


size_t AluminumParser::Set_opContext::getRuleIndex() const {
  return AluminumParser::RuleSet_op;
}

void AluminumParser::Set_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_op(this);
}

void AluminumParser::Set_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_op(this);
}


std::any AluminumParser::Set_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitSet_op(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Set_opContext* AluminumParser::set_op() {
  Set_opContext *_localctx = _tracker.createInstance<Set_opContext>(_ctx, getState());
  enterRule(_localctx, 18, AluminumParser::RuleSet_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(AluminumParser::SET);
    setState(102);
    match(AluminumParser::IDENTIFIER);
    setState(103);
    match(AluminumParser::EQUALS);
    setState(104);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

AluminumParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AluminumParser::ValueContext* AluminumParser::ExpressionContext::value() {
  return getRuleContext<AluminumParser::ValueContext>(0);
}

tree::TerminalNode* AluminumParser::ExpressionContext::LPAREN() {
  return getToken(AluminumParser::LPAREN, 0);
}

std::vector<AluminumParser::ExpressionContext *> AluminumParser::ExpressionContext::expression() {
  return getRuleContexts<AluminumParser::ExpressionContext>();
}

AluminumParser::ExpressionContext* AluminumParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<AluminumParser::ExpressionContext>(i);
}

tree::TerminalNode* AluminumParser::ExpressionContext::RPAREN() {
  return getToken(AluminumParser::RPAREN, 0);
}

AluminumParser::Function_callContext* AluminumParser::ExpressionContext::function_call() {
  return getRuleContext<AluminumParser::Function_callContext>(0);
}

std::vector<tree::TerminalNode *> AluminumParser::ExpressionContext::EQUALS() {
  return getTokens(AluminumParser::EQUALS);
}

tree::TerminalNode* AluminumParser::ExpressionContext::EQUALS(size_t i) {
  return getToken(AluminumParser::EQUALS, i);
}

tree::TerminalNode* AluminumParser::ExpressionContext::MUL() {
  return getToken(AluminumParser::MUL, 0);
}

tree::TerminalNode* AluminumParser::ExpressionContext::DIV() {
  return getToken(AluminumParser::DIV, 0);
}

tree::TerminalNode* AluminumParser::ExpressionContext::ADD() {
  return getToken(AluminumParser::ADD, 0);
}

tree::TerminalNode* AluminumParser::ExpressionContext::SUB() {
  return getToken(AluminumParser::SUB, 0);
}


size_t AluminumParser::ExpressionContext::getRuleIndex() const {
  return AluminumParser::RuleExpression;
}

void AluminumParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void AluminumParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any AluminumParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


AluminumParser::ExpressionContext* AluminumParser::expression() {
   return expression(0);
}

AluminumParser::ExpressionContext* AluminumParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AluminumParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  AluminumParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, AluminumParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(107);
      value();
      break;
    }

    case 2: {
      setState(108);
      match(AluminumParser::LPAREN);
      setState(109);
      expression(0);
      setState(110);
      match(AluminumParser::RPAREN);
      break;
    }

    case 3: {
      setState(112);
      function_call();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(133);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(131);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(115);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(116);
          match(AluminumParser::EQUALS);
          setState(117);
          match(AluminumParser::EQUALS);
          setState(118);
          expression(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(119);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(120);
          match(AluminumParser::MUL);
          setState(121);
          expression(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(122);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(123);
          match(AluminumParser::DIV);
          setState(124);
          expression(4);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(125);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(126);
          match(AluminumParser::ADD);
          setState(127);
          expression(3);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(128);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(129);
          match(AluminumParser::SUB);
          setState(130);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(135);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

AluminumParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Function_callContext::IDENTIFIER() {
  return getToken(AluminumParser::IDENTIFIER, 0);
}

tree::TerminalNode* AluminumParser::Function_callContext::LPAREN() {
  return getToken(AluminumParser::LPAREN, 0);
}

tree::TerminalNode* AluminumParser::Function_callContext::RPAREN() {
  return getToken(AluminumParser::RPAREN, 0);
}


size_t AluminumParser::Function_callContext::getRuleIndex() const {
  return AluminumParser::RuleFunction_call;
}

void AluminumParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void AluminumParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


std::any AluminumParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Function_callContext* AluminumParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 22, AluminumParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(AluminumParser::IDENTIFIER);
    setState(137);
    match(AluminumParser::LPAREN);
    setState(138);
    match(AluminumParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

AluminumParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AluminumParser::Literal_valContext* AluminumParser::ValueContext::literal_val() {
  return getRuleContext<AluminumParser::Literal_valContext>(0);
}

AluminumParser::Var_valContext* AluminumParser::ValueContext::var_val() {
  return getRuleContext<AluminumParser::Var_valContext>(0);
}


size_t AluminumParser::ValueContext::getRuleIndex() const {
  return AluminumParser::RuleValue;
}

void AluminumParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void AluminumParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any AluminumParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::ValueContext* AluminumParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 24, AluminumParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(140);
        literal_val();
        break;
      }

      case AluminumParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(141);
        var_val();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_valContext ------------------------------------------------------------------

AluminumParser::Literal_valContext::Literal_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Literal_valContext::INT_LITERAL() {
  return getToken(AluminumParser::INT_LITERAL, 0);
}


size_t AluminumParser::Literal_valContext::getRuleIndex() const {
  return AluminumParser::RuleLiteral_val;
}

void AluminumParser::Literal_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral_val(this);
}

void AluminumParser::Literal_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral_val(this);
}


std::any AluminumParser::Literal_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitLiteral_val(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Literal_valContext* AluminumParser::literal_val() {
  Literal_valContext *_localctx = _tracker.createInstance<Literal_valContext>(_ctx, getState());
  enterRule(_localctx, 26, AluminumParser::RuleLiteral_val);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(AluminumParser::INT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_valContext ------------------------------------------------------------------

AluminumParser::Var_valContext::Var_valContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Var_valContext::IDENTIFIER() {
  return getToken(AluminumParser::IDENTIFIER, 0);
}


size_t AluminumParser::Var_valContext::getRuleIndex() const {
  return AluminumParser::RuleVar_val;
}

void AluminumParser::Var_valContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_val(this);
}

void AluminumParser::Var_valContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_val(this);
}


std::any AluminumParser::Var_valContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitVar_val(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Var_valContext* AluminumParser::var_val() {
  Var_valContext *_localctx = _tracker.createInstance<Var_valContext>(_ctx, getState());
  enterRule(_localctx, 28, AluminumParser::RuleVar_val);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(AluminumParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

AluminumParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AluminumParser::Default_typeContext* AluminumParser::TypeContext::default_type() {
  return getRuleContext<AluminumParser::Default_typeContext>(0);
}

AluminumParser::Custom_typeContext* AluminumParser::TypeContext::custom_type() {
  return getRuleContext<AluminumParser::Custom_typeContext>(0);
}


size_t AluminumParser::TypeContext::getRuleIndex() const {
  return AluminumParser::RuleType;
}

void AluminumParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void AluminumParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any AluminumParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::TypeContext* AluminumParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 30, AluminumParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(148);
        default_type();
        break;
      }

      case AluminumParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(149);
        custom_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_typeContext ------------------------------------------------------------------

AluminumParser::Default_typeContext::Default_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Default_typeContext::INT() {
  return getToken(AluminumParser::INT, 0);
}


size_t AluminumParser::Default_typeContext::getRuleIndex() const {
  return AluminumParser::RuleDefault_type;
}

void AluminumParser::Default_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault_type(this);
}

void AluminumParser::Default_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault_type(this);
}


std::any AluminumParser::Default_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitDefault_type(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Default_typeContext* AluminumParser::default_type() {
  Default_typeContext *_localctx = _tracker.createInstance<Default_typeContext>(_ctx, getState());
  enterRule(_localctx, 32, AluminumParser::RuleDefault_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(AluminumParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Custom_typeContext ------------------------------------------------------------------

AluminumParser::Custom_typeContext::Custom_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AluminumParser::Custom_typeContext::getRuleIndex() const {
  return AluminumParser::RuleCustom_type;
}

void AluminumParser::Custom_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCustom_type(this);
}

void AluminumParser::Custom_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCustom_type(this);
}


std::any AluminumParser::Custom_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitCustom_type(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Custom_typeContext* AluminumParser::custom_type() {
  Custom_typeContext *_localctx = _tracker.createInstance<Custom_typeContext>(_ctx, getState());
  enterRule(_localctx, 34, AluminumParser::RuleCustom_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(AluminumParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool AluminumParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AluminumParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void AluminumParser::initialize() {
  ::antlr4::internal::call_once(aluminumParserOnceFlag, aluminumParserInitialize);
}
