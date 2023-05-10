
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0


#include "AluminumListener.h"
#include "AluminumVisitor.h"

#include "AluminumParser.h"


using namespace antlrcpp;
using namespace Aluminum;

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
      "program", "function", "function_header", "function_identifier", "function_variables", 
      "block", "statement", "if_block", "else_block", "while_block", "declare_op", 
      "set_op", "expression", "comp_op", "function_call", "value", "literal_val", 
      "bool_literal", "var_val", "type", "default_type", "custom_type"
    },
    std::vector<std::string>{
      "", "'cust'", "'('", "')'", "';'", "'{'", "'}'", "'->'", "'.'", "','", 
      "'>='", "'>'", "'<='", "'<'", "'~'", "'='", "'take'", "'set'", "'main'", 
      "'if'", "'else'", "'while'", "'def'", "'func'", "'var'", "'int'", 
      "'float'", "'bool'", "'true'", "'false'", "", "'*'", "'/'", "'+'", 
      "'-'"
    },
    std::vector<std::string>{
      "", "", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOT", 
      "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS", "NOT", "EQUALS", 
      "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", "FUNCTION", 
      "VARIABLE", "INT", "FLOAT", "BOOL", "TRUE", "FALSE", "IDENTIFIER", 
      "MUL", "DIV", "ADD", "SUB", "INT_LITERAL", "FLOAT_LITERAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,37,191,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,1,0,4,0,46,8,0,11,0,12,0,47,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,
  	2,3,2,60,8,2,1,2,1,2,1,2,3,2,65,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,5,
  	4,75,8,4,10,4,12,4,78,9,4,1,5,1,5,5,5,82,8,5,10,5,12,5,85,9,5,1,5,1,5,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,100,8,6,1,7,1,7,1,7,1,
  	7,1,7,1,7,3,7,108,8,7,1,8,1,8,1,8,3,8,113,8,8,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,10,1,10,1,10,1,10,1,10,3,10,126,8,10,1,11,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,3,12,140,8,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,5,12,152,8,12,10,12,12,12,155,9,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,3,13,164,8,13,1,14,1,14,1,14,1,14,1,15,1,15,
  	3,15,172,8,15,1,16,1,16,1,16,3,16,177,8,16,1,17,1,17,1,18,1,18,1,19,1,
  	19,3,19,185,8,19,1,20,1,20,1,21,1,21,1,21,0,1,24,22,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,0,5,2,0,18,18,30,30,1,0,31,
  	32,1,0,33,34,1,0,28,29,1,0,25,27,194,0,45,1,0,0,0,2,51,1,0,0,0,4,54,1,
  	0,0,0,6,66,1,0,0,0,8,68,1,0,0,0,10,79,1,0,0,0,12,99,1,0,0,0,14,101,1,
  	0,0,0,16,109,1,0,0,0,18,114,1,0,0,0,20,120,1,0,0,0,22,127,1,0,0,0,24,
  	139,1,0,0,0,26,163,1,0,0,0,28,165,1,0,0,0,30,171,1,0,0,0,32,176,1,0,0,
  	0,34,178,1,0,0,0,36,180,1,0,0,0,38,184,1,0,0,0,40,186,1,0,0,0,42,188,
  	1,0,0,0,44,46,3,2,1,0,45,44,1,0,0,0,46,47,1,0,0,0,47,45,1,0,0,0,47,48,
  	1,0,0,0,48,49,1,0,0,0,49,50,5,0,0,1,50,1,1,0,0,0,51,52,3,4,2,0,52,53,
  	3,10,5,0,53,3,1,0,0,0,54,55,5,22,0,0,55,56,5,23,0,0,56,57,3,6,3,0,57,
  	59,5,2,0,0,58,60,3,8,4,0,59,58,1,0,0,0,59,60,1,0,0,0,60,61,1,0,0,0,61,
  	64,5,3,0,0,62,63,5,7,0,0,63,65,3,38,19,0,64,62,1,0,0,0,64,65,1,0,0,0,
  	65,5,1,0,0,0,66,67,7,0,0,0,67,7,1,0,0,0,68,69,3,38,19,0,69,76,5,30,0,
  	0,70,71,5,9,0,0,71,72,3,38,19,0,72,73,5,30,0,0,73,75,1,0,0,0,74,70,1,
  	0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,9,1,0,0,0,78,76,1,
  	0,0,0,79,83,5,5,0,0,80,82,3,12,6,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,
  	1,0,0,0,83,84,1,0,0,0,84,86,1,0,0,0,85,83,1,0,0,0,86,87,5,6,0,0,87,11,
  	1,0,0,0,88,89,3,20,10,0,89,90,5,4,0,0,90,100,1,0,0,0,91,92,3,22,11,0,
  	92,93,5,4,0,0,93,100,1,0,0,0,94,95,3,24,12,0,95,96,5,4,0,0,96,100,1,0,
  	0,0,97,100,3,14,7,0,98,100,3,18,9,0,99,88,1,0,0,0,99,91,1,0,0,0,99,94,
  	1,0,0,0,99,97,1,0,0,0,99,98,1,0,0,0,100,13,1,0,0,0,101,102,5,19,0,0,102,
  	103,5,2,0,0,103,104,3,24,12,0,104,105,5,3,0,0,105,107,3,10,5,0,106,108,
  	3,16,8,0,107,106,1,0,0,0,107,108,1,0,0,0,108,15,1,0,0,0,109,112,5,20,
  	0,0,110,113,3,14,7,0,111,113,3,10,5,0,112,110,1,0,0,0,112,111,1,0,0,0,
  	113,17,1,0,0,0,114,115,5,21,0,0,115,116,5,2,0,0,116,117,3,24,12,0,117,
  	118,5,3,0,0,118,119,3,10,5,0,119,19,1,0,0,0,120,121,5,16,0,0,121,122,
  	3,38,19,0,122,125,5,30,0,0,123,124,5,15,0,0,124,126,3,24,12,0,125,123,
  	1,0,0,0,125,126,1,0,0,0,126,21,1,0,0,0,127,128,5,17,0,0,128,129,5,30,
  	0,0,129,130,5,15,0,0,130,131,3,24,12,0,131,23,1,0,0,0,132,133,6,12,-1,
  	0,133,140,3,30,15,0,134,140,3,28,14,0,135,136,5,2,0,0,136,137,3,24,12,
  	0,137,138,5,3,0,0,138,140,1,0,0,0,139,132,1,0,0,0,139,134,1,0,0,0,139,
  	135,1,0,0,0,140,153,1,0,0,0,141,142,10,3,0,0,142,143,7,1,0,0,143,152,
  	3,24,12,4,144,145,10,2,0,0,145,146,7,2,0,0,146,152,3,24,12,3,147,148,
  	10,1,0,0,148,149,3,26,13,0,149,150,3,24,12,2,150,152,1,0,0,0,151,141,
  	1,0,0,0,151,144,1,0,0,0,151,147,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,
  	0,153,154,1,0,0,0,154,25,1,0,0,0,155,153,1,0,0,0,156,157,5,14,0,0,157,
  	164,5,15,0,0,158,164,5,15,0,0,159,164,5,10,0,0,160,164,5,12,0,0,161,164,
  	5,11,0,0,162,164,5,13,0,0,163,156,1,0,0,0,163,158,1,0,0,0,163,159,1,0,
  	0,0,163,160,1,0,0,0,163,161,1,0,0,0,163,162,1,0,0,0,164,27,1,0,0,0,165,
  	166,5,30,0,0,166,167,5,2,0,0,167,168,5,3,0,0,168,29,1,0,0,0,169,172,3,
  	32,16,0,170,172,3,36,18,0,171,169,1,0,0,0,171,170,1,0,0,0,172,31,1,0,
  	0,0,173,177,5,35,0,0,174,177,5,36,0,0,175,177,3,34,17,0,176,173,1,0,0,
  	0,176,174,1,0,0,0,176,175,1,0,0,0,177,33,1,0,0,0,178,179,7,3,0,0,179,
  	35,1,0,0,0,180,181,5,30,0,0,181,37,1,0,0,0,182,185,3,40,20,0,183,185,
  	3,42,21,0,184,182,1,0,0,0,184,183,1,0,0,0,185,39,1,0,0,0,186,187,7,4,
  	0,0,187,41,1,0,0,0,188,189,5,1,0,0,189,43,1,0,0,0,16,47,59,64,76,83,99,
  	107,112,125,139,151,153,163,171,176,184
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

tree::TerminalNode* AluminumParser::ProgramContext::EOF() {
  return getToken(AluminumParser::EOF, 0);
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
    setState(45); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(44);
      function();
      setState(47); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AluminumParser::DEFINE);
    setState(49);
    match(AluminumParser::EOF);
   
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
    setState(51);
    function_header();
    setState(52);
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

AluminumParser::Function_identifierContext* AluminumParser::Function_headerContext::function_identifier() {
  return getRuleContext<AluminumParser::Function_identifierContext>(0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::LPAREN() {
  return getToken(AluminumParser::LPAREN, 0);
}

tree::TerminalNode* AluminumParser::Function_headerContext::RPAREN() {
  return getToken(AluminumParser::RPAREN, 0);
}

AluminumParser::Function_variablesContext* AluminumParser::Function_headerContext::function_variables() {
  return getRuleContext<AluminumParser::Function_variablesContext>(0);
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
    setState(54);
    match(AluminumParser::DEFINE);
    setState(55);
    match(AluminumParser::FUNCTION);
    setState(56);
    function_identifier();
    setState(57);
    match(AluminumParser::LPAREN);
    setState(59);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 234881026) != 0)) {
      setState(58);
      function_variables();
    }
    setState(61);
    match(AluminumParser::RPAREN);
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::ARROW) {
      setState(62);
      match(AluminumParser::ARROW);
      setState(63);
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

//----------------- Function_identifierContext ------------------------------------------------------------------

AluminumParser::Function_identifierContext::Function_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Function_identifierContext::MAIN() {
  return getToken(AluminumParser::MAIN, 0);
}

tree::TerminalNode* AluminumParser::Function_identifierContext::IDENTIFIER() {
  return getToken(AluminumParser::IDENTIFIER, 0);
}


size_t AluminumParser::Function_identifierContext::getRuleIndex() const {
  return AluminumParser::RuleFunction_identifier;
}

void AluminumParser::Function_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_identifier(this);
}

void AluminumParser::Function_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_identifier(this);
}


std::any AluminumParser::Function_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitFunction_identifier(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Function_identifierContext* AluminumParser::function_identifier() {
  Function_identifierContext *_localctx = _tracker.createInstance<Function_identifierContext>(_ctx, getState());
  enterRule(_localctx, 6, AluminumParser::RuleFunction_identifier);
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
    setState(66);
    _la = _input->LA(1);
    if (!(_la == AluminumParser::MAIN

    || _la == AluminumParser::IDENTIFIER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_variablesContext ------------------------------------------------------------------

AluminumParser::Function_variablesContext::Function_variablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AluminumParser::TypeContext *> AluminumParser::Function_variablesContext::type() {
  return getRuleContexts<AluminumParser::TypeContext>();
}

AluminumParser::TypeContext* AluminumParser::Function_variablesContext::type(size_t i) {
  return getRuleContext<AluminumParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> AluminumParser::Function_variablesContext::IDENTIFIER() {
  return getTokens(AluminumParser::IDENTIFIER);
}

tree::TerminalNode* AluminumParser::Function_variablesContext::IDENTIFIER(size_t i) {
  return getToken(AluminumParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> AluminumParser::Function_variablesContext::COMMA() {
  return getTokens(AluminumParser::COMMA);
}

tree::TerminalNode* AluminumParser::Function_variablesContext::COMMA(size_t i) {
  return getToken(AluminumParser::COMMA, i);
}


size_t AluminumParser::Function_variablesContext::getRuleIndex() const {
  return AluminumParser::RuleFunction_variables;
}

void AluminumParser::Function_variablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_variables(this);
}

void AluminumParser::Function_variablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_variables(this);
}


std::any AluminumParser::Function_variablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitFunction_variables(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Function_variablesContext* AluminumParser::function_variables() {
  Function_variablesContext *_localctx = _tracker.createInstance<Function_variablesContext>(_ctx, getState());
  enterRule(_localctx, 8, AluminumParser::RuleFunction_variables);
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
    setState(68);
    type();
    setState(69);
    match(AluminumParser::IDENTIFIER);
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AluminumParser::COMMA) {
      setState(70);
      match(AluminumParser::COMMA);
      setState(71);
      type();
      setState(72);
      match(AluminumParser::IDENTIFIER);
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
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
  enterRule(_localctx, 10, AluminumParser::RuleBlock);
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
    setState(79);
    match(AluminumParser::LCURL);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 104961081348) != 0)) {
      setState(80);
      statement();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
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
  enterRule(_localctx, 12, AluminumParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::TAKE: {
        enterOuterAlt(_localctx, 1);
        setState(88);
        declare_op();
        setState(89);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::SET: {
        enterOuterAlt(_localctx, 2);
        setState(91);
        set_op();
        setState(92);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::LPAREN:
      case AluminumParser::TRUE:
      case AluminumParser::FALSE:
      case AluminumParser::IDENTIFIER:
      case AluminumParser::INT_LITERAL:
      case AluminumParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(94);
        expression(0);
        setState(95);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(97);
        if_block();
        break;
      }

      case AluminumParser::WHILE: {
        enterOuterAlt(_localctx, 5);
        setState(98);
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
  enterRule(_localctx, 14, AluminumParser::RuleIf_block);
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
    setState(101);
    match(AluminumParser::IF);
    setState(102);
    match(AluminumParser::LPAREN);
    setState(103);
    expression(0);
    setState(104);
    match(AluminumParser::RPAREN);
    setState(105);
    block();
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::ELSE) {
      setState(106);
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
  enterRule(_localctx, 16, AluminumParser::RuleElse_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(AluminumParser::ELSE);
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::IF: {
        setState(110);
        if_block();
        break;
      }

      case AluminumParser::LCURL: {
        setState(111);
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
  enterRule(_localctx, 18, AluminumParser::RuleWhile_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(AluminumParser::WHILE);
    setState(115);
    match(AluminumParser::LPAREN);
    setState(116);
    expression(0);
    setState(117);
    match(AluminumParser::RPAREN);
    setState(118);
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
  enterRule(_localctx, 20, AluminumParser::RuleDeclare_op);
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
    setState(120);
    match(AluminumParser::TAKE);
    setState(121);
    type();
    setState(122);
    match(AluminumParser::IDENTIFIER);
    setState(125);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::EQUALS) {
      setState(123);
      match(AluminumParser::EQUALS);
      setState(124);
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
  enterRule(_localctx, 22, AluminumParser::RuleSet_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(AluminumParser::SET);
    setState(128);
    match(AluminumParser::IDENTIFIER);
    setState(129);
    match(AluminumParser::EQUALS);
    setState(130);
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

AluminumParser::Function_callContext* AluminumParser::ExpressionContext::function_call() {
  return getRuleContext<AluminumParser::Function_callContext>(0);
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

AluminumParser::Comp_opContext* AluminumParser::ExpressionContext::comp_op() {
  return getRuleContext<AluminumParser::Comp_opContext>(0);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, AluminumParser::RuleExpression, precedence);

    size_t _la = 0;

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
    setState(139);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(133);
      value();
      break;
    }

    case 2: {
      setState(134);
      function_call();
      break;
    }

    case 3: {
      setState(135);
      match(AluminumParser::LPAREN);
      setState(136);
      expression(0);
      setState(137);
      match(AluminumParser::RPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(153);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(151);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(141);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(142);
          _la = _input->LA(1);
          if (!(_la == AluminumParser::MUL

          || _la == AluminumParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(143);
          expression(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(144);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(145);
          _la = _input->LA(1);
          if (!(_la == AluminumParser::ADD

          || _la == AluminumParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(146);
          expression(3);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(147);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(148);
          comp_op();
          setState(149);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(155);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Comp_opContext ------------------------------------------------------------------

AluminumParser::Comp_opContext::Comp_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Comp_opContext::NOT() {
  return getToken(AluminumParser::NOT, 0);
}

tree::TerminalNode* AluminumParser::Comp_opContext::EQUALS() {
  return getToken(AluminumParser::EQUALS, 0);
}

tree::TerminalNode* AluminumParser::Comp_opContext::GREATEREQUAL() {
  return getToken(AluminumParser::GREATEREQUAL, 0);
}

tree::TerminalNode* AluminumParser::Comp_opContext::LESSEQUAL() {
  return getToken(AluminumParser::LESSEQUAL, 0);
}

tree::TerminalNode* AluminumParser::Comp_opContext::GREATER() {
  return getToken(AluminumParser::GREATER, 0);
}

tree::TerminalNode* AluminumParser::Comp_opContext::LESS() {
  return getToken(AluminumParser::LESS, 0);
}


size_t AluminumParser::Comp_opContext::getRuleIndex() const {
  return AluminumParser::RuleComp_op;
}

void AluminumParser::Comp_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_op(this);
}

void AluminumParser::Comp_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_op(this);
}


std::any AluminumParser::Comp_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitComp_op(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Comp_opContext* AluminumParser::comp_op() {
  Comp_opContext *_localctx = _tracker.createInstance<Comp_opContext>(_ctx, getState());
  enterRule(_localctx, 26, AluminumParser::RuleComp_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        match(AluminumParser::NOT);
        setState(157);
        match(AluminumParser::EQUALS);
        break;
      }

      case AluminumParser::EQUALS: {
        enterOuterAlt(_localctx, 2);
        setState(158);
        match(AluminumParser::EQUALS);
        break;
      }

      case AluminumParser::GREATEREQUAL: {
        enterOuterAlt(_localctx, 3);
        setState(159);
        match(AluminumParser::GREATEREQUAL);
        break;
      }

      case AluminumParser::LESSEQUAL: {
        enterOuterAlt(_localctx, 4);
        setState(160);
        match(AluminumParser::LESSEQUAL);
        break;
      }

      case AluminumParser::GREATER: {
        enterOuterAlt(_localctx, 5);
        setState(161);
        match(AluminumParser::GREATER);
        break;
      }

      case AluminumParser::LESS: {
        enterOuterAlt(_localctx, 6);
        setState(162);
        match(AluminumParser::LESS);
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
  enterRule(_localctx, 28, AluminumParser::RuleFunction_call);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(AluminumParser::IDENTIFIER);
    setState(166);
    match(AluminumParser::LPAREN);
    setState(167);
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
  enterRule(_localctx, 30, AluminumParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::TRUE:
      case AluminumParser::FALSE:
      case AluminumParser::INT_LITERAL:
      case AluminumParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(169);
        literal_val();
        break;
      }

      case AluminumParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(170);
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

tree::TerminalNode* AluminumParser::Literal_valContext::FLOAT_LITERAL() {
  return getToken(AluminumParser::FLOAT_LITERAL, 0);
}

AluminumParser::Bool_literalContext* AluminumParser::Literal_valContext::bool_literal() {
  return getRuleContext<AluminumParser::Bool_literalContext>(0);
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
  enterRule(_localctx, 32, AluminumParser::RuleLiteral_val);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(173);
        match(AluminumParser::INT_LITERAL);
        break;
      }

      case AluminumParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(174);
        match(AluminumParser::FLOAT_LITERAL);
        break;
      }

      case AluminumParser::TRUE:
      case AluminumParser::FALSE: {
        enterOuterAlt(_localctx, 3);
        setState(175);
        bool_literal();
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

//----------------- Bool_literalContext ------------------------------------------------------------------

AluminumParser::Bool_literalContext::Bool_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Bool_literalContext::TRUE() {
  return getToken(AluminumParser::TRUE, 0);
}

tree::TerminalNode* AluminumParser::Bool_literalContext::FALSE() {
  return getToken(AluminumParser::FALSE, 0);
}


size_t AluminumParser::Bool_literalContext::getRuleIndex() const {
  return AluminumParser::RuleBool_literal;
}

void AluminumParser::Bool_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_literal(this);
}

void AluminumParser::Bool_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_literal(this);
}


std::any AluminumParser::Bool_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitBool_literal(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Bool_literalContext* AluminumParser::bool_literal() {
  Bool_literalContext *_localctx = _tracker.createInstance<Bool_literalContext>(_ctx, getState());
  enterRule(_localctx, 34, AluminumParser::RuleBool_literal);
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
    setState(178);
    _la = _input->LA(1);
    if (!(_la == AluminumParser::TRUE

    || _la == AluminumParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
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
  enterRule(_localctx, 36, AluminumParser::RuleVar_val);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
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
  enterRule(_localctx, 38, AluminumParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::INT:
      case AluminumParser::FLOAT:
      case AluminumParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(182);
        default_type();
        break;
      }

      case AluminumParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(183);
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

tree::TerminalNode* AluminumParser::Default_typeContext::FLOAT() {
  return getToken(AluminumParser::FLOAT, 0);
}

tree::TerminalNode* AluminumParser::Default_typeContext::BOOL() {
  return getToken(AluminumParser::BOOL, 0);
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
  enterRule(_localctx, 40, AluminumParser::RuleDefault_type);
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
    setState(186);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 234881024) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
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
  enterRule(_localctx, 42, AluminumParser::RuleCustom_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
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
    case 12: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AluminumParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void AluminumParser::initialize() {
  ::antlr4::internal::call_once(aluminumParserOnceFlag, aluminumParserInitialize);
}
