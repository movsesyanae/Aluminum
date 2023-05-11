
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
      "block", "statement", "return_op", "if_block", "else_block", "while_block", 
      "declare_op", "set_op", "expression", "comp_op", "function_call", 
      "passed_arguments", "value", "literal_val", "bool_literal", "var_val", 
      "type", "default_type", "custom_type"
    },
    std::vector<std::string>{
      "", "'cust'", "'('", "')'", "';'", "'{'", "'}'", "'->'", "'.'", "','", 
      "'>='", "'>'", "'<='", "'<'", "'~'", "'='", "'take'", "'set'", "'main'", 
      "'if'", "'else'", "'while'", "'def'", "'func'", "'var'", "'int'", 
      "'float'", "'bool'", "'true'", "'false'", "'return'", "", "'*'", "'/'", 
      "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOT", 
      "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS", "NOT", "EQUALS", 
      "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", "FUNCTION", 
      "VARIABLE", "INT", "FLOAT", "BOOL", "TRUE", "FALSE", "RETURN", "IDENTIFIER", 
      "MUL", "DIV", "ADD", "SUB", "INT_LITERAL", "FLOAT_LITERAL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,38,212,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,4,0,50,8,0,11,0,12,0,51,1,0,1,0,1,1,1,1,1,
  	1,1,2,1,2,1,2,1,2,1,2,3,2,64,8,2,1,2,1,2,1,2,3,2,69,8,2,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,5,4,79,8,4,10,4,12,4,82,9,4,1,5,1,5,5,5,86,8,5,10,5,
  	12,5,89,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,3,6,107,8,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,3,8,118,8,8,1,9,
  	1,9,1,9,3,9,123,8,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,
  	1,11,3,11,136,8,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,3,13,150,8,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,5,13,162,8,13,10,13,12,13,165,9,13,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,3,14,174,8,14,1,15,1,15,1,15,3,15,179,8,15,1,15,1,15,1,16,1,16,1,
  	16,5,16,186,8,16,10,16,12,16,189,9,16,1,17,1,17,3,17,193,8,17,1,18,1,
  	18,1,18,3,18,198,8,18,1,19,1,19,1,20,1,20,1,21,1,21,3,21,206,8,21,1,22,
  	1,22,1,23,1,23,1,23,0,1,26,24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,0,5,2,0,18,18,31,31,1,0,32,33,1,0,34,35,1,
  	0,28,29,1,0,25,27,216,0,49,1,0,0,0,2,55,1,0,0,0,4,58,1,0,0,0,6,70,1,0,
  	0,0,8,72,1,0,0,0,10,83,1,0,0,0,12,106,1,0,0,0,14,108,1,0,0,0,16,111,1,
  	0,0,0,18,119,1,0,0,0,20,124,1,0,0,0,22,130,1,0,0,0,24,137,1,0,0,0,26,
  	149,1,0,0,0,28,173,1,0,0,0,30,175,1,0,0,0,32,182,1,0,0,0,34,192,1,0,0,
  	0,36,197,1,0,0,0,38,199,1,0,0,0,40,201,1,0,0,0,42,205,1,0,0,0,44,207,
  	1,0,0,0,46,209,1,0,0,0,48,50,3,2,1,0,49,48,1,0,0,0,50,51,1,0,0,0,51,49,
  	1,0,0,0,51,52,1,0,0,0,52,53,1,0,0,0,53,54,5,0,0,1,54,1,1,0,0,0,55,56,
  	3,4,2,0,56,57,3,10,5,0,57,3,1,0,0,0,58,59,5,22,0,0,59,60,5,23,0,0,60,
  	61,3,6,3,0,61,63,5,2,0,0,62,64,3,8,4,0,63,62,1,0,0,0,63,64,1,0,0,0,64,
  	65,1,0,0,0,65,68,5,3,0,0,66,67,5,7,0,0,67,69,3,42,21,0,68,66,1,0,0,0,
  	68,69,1,0,0,0,69,5,1,0,0,0,70,71,7,0,0,0,71,7,1,0,0,0,72,73,3,42,21,0,
  	73,80,5,31,0,0,74,75,5,9,0,0,75,76,3,42,21,0,76,77,5,31,0,0,77,79,1,0,
  	0,0,78,74,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,9,1,0,
  	0,0,82,80,1,0,0,0,83,87,5,5,0,0,84,86,3,12,6,0,85,84,1,0,0,0,86,89,1,
  	0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,90,1,0,0,0,89,87,1,0,0,0,90,91,5,
  	6,0,0,91,11,1,0,0,0,92,93,3,22,11,0,93,94,5,4,0,0,94,107,1,0,0,0,95,96,
  	3,24,12,0,96,97,5,4,0,0,97,107,1,0,0,0,98,99,3,14,7,0,99,100,5,4,0,0,
  	100,107,1,0,0,0,101,102,3,26,13,0,102,103,5,4,0,0,103,107,1,0,0,0,104,
  	107,3,16,8,0,105,107,3,20,10,0,106,92,1,0,0,0,106,95,1,0,0,0,106,98,1,
  	0,0,0,106,101,1,0,0,0,106,104,1,0,0,0,106,105,1,0,0,0,107,13,1,0,0,0,
  	108,109,5,30,0,0,109,110,3,26,13,0,110,15,1,0,0,0,111,112,5,19,0,0,112,
  	113,5,2,0,0,113,114,3,26,13,0,114,115,5,3,0,0,115,117,3,10,5,0,116,118,
  	3,18,9,0,117,116,1,0,0,0,117,118,1,0,0,0,118,17,1,0,0,0,119,122,5,20,
  	0,0,120,123,3,16,8,0,121,123,3,10,5,0,122,120,1,0,0,0,122,121,1,0,0,0,
  	123,19,1,0,0,0,124,125,5,21,0,0,125,126,5,2,0,0,126,127,3,26,13,0,127,
  	128,5,3,0,0,128,129,3,10,5,0,129,21,1,0,0,0,130,131,5,16,0,0,131,132,
  	3,42,21,0,132,135,5,31,0,0,133,134,5,15,0,0,134,136,3,26,13,0,135,133,
  	1,0,0,0,135,136,1,0,0,0,136,23,1,0,0,0,137,138,5,17,0,0,138,139,5,31,
  	0,0,139,140,5,15,0,0,140,141,3,26,13,0,141,25,1,0,0,0,142,143,6,13,-1,
  	0,143,150,3,34,17,0,144,150,3,30,15,0,145,146,5,2,0,0,146,147,3,26,13,
  	0,147,148,5,3,0,0,148,150,1,0,0,0,149,142,1,0,0,0,149,144,1,0,0,0,149,
  	145,1,0,0,0,150,163,1,0,0,0,151,152,10,3,0,0,152,153,7,1,0,0,153,162,
  	3,26,13,4,154,155,10,2,0,0,155,156,7,2,0,0,156,162,3,26,13,3,157,158,
  	10,1,0,0,158,159,3,28,14,0,159,160,3,26,13,2,160,162,1,0,0,0,161,151,
  	1,0,0,0,161,154,1,0,0,0,161,157,1,0,0,0,162,165,1,0,0,0,163,161,1,0,0,
  	0,163,164,1,0,0,0,164,27,1,0,0,0,165,163,1,0,0,0,166,167,5,14,0,0,167,
  	174,5,15,0,0,168,174,5,15,0,0,169,174,5,10,0,0,170,174,5,12,0,0,171,174,
  	5,11,0,0,172,174,5,13,0,0,173,166,1,0,0,0,173,168,1,0,0,0,173,169,1,0,
  	0,0,173,170,1,0,0,0,173,171,1,0,0,0,173,172,1,0,0,0,174,29,1,0,0,0,175,
  	176,5,31,0,0,176,178,5,2,0,0,177,179,3,32,16,0,178,177,1,0,0,0,178,179,
  	1,0,0,0,179,180,1,0,0,0,180,181,5,3,0,0,181,31,1,0,0,0,182,187,3,26,13,
  	0,183,184,5,9,0,0,184,186,3,26,13,0,185,183,1,0,0,0,186,189,1,0,0,0,187,
  	185,1,0,0,0,187,188,1,0,0,0,188,33,1,0,0,0,189,187,1,0,0,0,190,193,3,
  	36,18,0,191,193,3,40,20,0,192,190,1,0,0,0,192,191,1,0,0,0,193,35,1,0,
  	0,0,194,198,5,36,0,0,195,198,5,37,0,0,196,198,3,38,19,0,197,194,1,0,0,
  	0,197,195,1,0,0,0,197,196,1,0,0,0,198,37,1,0,0,0,199,200,7,3,0,0,200,
  	39,1,0,0,0,201,202,5,31,0,0,202,41,1,0,0,0,203,206,3,44,22,0,204,206,
  	3,46,23,0,205,203,1,0,0,0,205,204,1,0,0,0,206,43,1,0,0,0,207,208,7,4,
  	0,0,208,45,1,0,0,0,209,210,5,1,0,0,210,47,1,0,0,0,18,51,63,68,80,87,106,
  	117,122,135,149,161,163,173,178,187,192,197,205
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
    setState(49); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(48);
      function();
      setState(51); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AluminumParser::DEFINE);
    setState(53);
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
    setState(55);
    function_header();
    setState(56);
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
    setState(58);
    match(AluminumParser::DEFINE);
    setState(59);
    match(AluminumParser::FUNCTION);
    setState(60);
    function_identifier();
    setState(61);
    match(AluminumParser::LPAREN);
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 234881026) != 0)) {
      setState(62);
      function_variables();
    }
    setState(65);
    match(AluminumParser::RPAREN);
    setState(68);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::ARROW) {
      setState(66);
      match(AluminumParser::ARROW);
      setState(67);
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
    setState(70);
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
    setState(72);
    type();
    setState(73);
    match(AluminumParser::IDENTIFIER);
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AluminumParser::COMMA) {
      setState(74);
      match(AluminumParser::COMMA);
      setState(75);
      type();
      setState(76);
      match(AluminumParser::IDENTIFIER);
      setState(82);
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
    setState(83);
    match(AluminumParser::LCURL);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 210187780100) != 0)) {
      setState(84);
      statement();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
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

AluminumParser::Return_opContext* AluminumParser::StatementContext::return_op() {
  return getRuleContext<AluminumParser::Return_opContext>(0);
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
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::TAKE: {
        enterOuterAlt(_localctx, 1);
        setState(92);
        declare_op();
        setState(93);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::SET: {
        enterOuterAlt(_localctx, 2);
        setState(95);
        set_op();
        setState(96);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(98);
        return_op();
        setState(99);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::LPAREN:
      case AluminumParser::TRUE:
      case AluminumParser::FALSE:
      case AluminumParser::IDENTIFIER:
      case AluminumParser::INT_LITERAL:
      case AluminumParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(101);
        expression(0);
        setState(102);
        match(AluminumParser::EOL);
        break;
      }

      case AluminumParser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(104);
        if_block();
        break;
      }

      case AluminumParser::WHILE: {
        enterOuterAlt(_localctx, 6);
        setState(105);
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

//----------------- Return_opContext ------------------------------------------------------------------

AluminumParser::Return_opContext::Return_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AluminumParser::Return_opContext::RETURN() {
  return getToken(AluminumParser::RETURN, 0);
}

AluminumParser::ExpressionContext* AluminumParser::Return_opContext::expression() {
  return getRuleContext<AluminumParser::ExpressionContext>(0);
}


size_t AluminumParser::Return_opContext::getRuleIndex() const {
  return AluminumParser::RuleReturn_op;
}

void AluminumParser::Return_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_op(this);
}

void AluminumParser::Return_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_op(this);
}


std::any AluminumParser::Return_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitReturn_op(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Return_opContext* AluminumParser::return_op() {
  Return_opContext *_localctx = _tracker.createInstance<Return_opContext>(_ctx, getState());
  enterRule(_localctx, 14, AluminumParser::RuleReturn_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(AluminumParser::RETURN);
    setState(109);
    expression(0);
   
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
  enterRule(_localctx, 16, AluminumParser::RuleIf_block);
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
    setState(111);
    match(AluminumParser::IF);
    setState(112);
    match(AluminumParser::LPAREN);
    setState(113);
    expression(0);
    setState(114);
    match(AluminumParser::RPAREN);
    setState(115);
    block();
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::ELSE) {
      setState(116);
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
  enterRule(_localctx, 18, AluminumParser::RuleElse_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(AluminumParser::ELSE);
    setState(122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::IF: {
        setState(120);
        if_block();
        break;
      }

      case AluminumParser::LCURL: {
        setState(121);
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
  enterRule(_localctx, 20, AluminumParser::RuleWhile_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    match(AluminumParser::WHILE);
    setState(125);
    match(AluminumParser::LPAREN);
    setState(126);
    expression(0);
    setState(127);
    match(AluminumParser::RPAREN);
    setState(128);
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
  enterRule(_localctx, 22, AluminumParser::RuleDeclare_op);
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
    setState(130);
    match(AluminumParser::TAKE);
    setState(131);
    type();
    setState(132);
    match(AluminumParser::IDENTIFIER);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AluminumParser::EQUALS) {
      setState(133);
      match(AluminumParser::EQUALS);
      setState(134);
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
  enterRule(_localctx, 24, AluminumParser::RuleSet_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(AluminumParser::SET);
    setState(138);
    match(AluminumParser::IDENTIFIER);
    setState(139);
    match(AluminumParser::EQUALS);
    setState(140);
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
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, AluminumParser::RuleExpression, precedence);

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
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(143);
      value();
      break;
    }

    case 2: {
      setState(144);
      function_call();
      break;
    }

    case 3: {
      setState(145);
      match(AluminumParser::LPAREN);
      setState(146);
      expression(0);
      setState(147);
      match(AluminumParser::RPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(163);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(161);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(151);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(152);
          _la = _input->LA(1);
          if (!(_la == AluminumParser::MUL

          || _la == AluminumParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(153);
          expression(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(154);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(155);
          _la = _input->LA(1);
          if (!(_la == AluminumParser::ADD

          || _la == AluminumParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(156);
          expression(3);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(157);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(158);
          comp_op();
          setState(159);
          expression(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(165);
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
  enterRule(_localctx, 28, AluminumParser::RuleComp_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(166);
        match(AluminumParser::NOT);
        setState(167);
        match(AluminumParser::EQUALS);
        break;
      }

      case AluminumParser::EQUALS: {
        enterOuterAlt(_localctx, 2);
        setState(168);
        match(AluminumParser::EQUALS);
        break;
      }

      case AluminumParser::GREATEREQUAL: {
        enterOuterAlt(_localctx, 3);
        setState(169);
        match(AluminumParser::GREATEREQUAL);
        break;
      }

      case AluminumParser::LESSEQUAL: {
        enterOuterAlt(_localctx, 4);
        setState(170);
        match(AluminumParser::LESSEQUAL);
        break;
      }

      case AluminumParser::GREATER: {
        enterOuterAlt(_localctx, 5);
        setState(171);
        match(AluminumParser::GREATER);
        break;
      }

      case AluminumParser::LESS: {
        enterOuterAlt(_localctx, 6);
        setState(172);
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

AluminumParser::Passed_argumentsContext* AluminumParser::Function_callContext::passed_arguments() {
  return getRuleContext<AluminumParser::Passed_argumentsContext>(0);
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
  enterRule(_localctx, 30, AluminumParser::RuleFunction_call);
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
    setState(175);
    match(AluminumParser::IDENTIFIER);
    setState(176);
    match(AluminumParser::LPAREN);
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 209111220228) != 0)) {
      setState(177);
      passed_arguments();
    }
    setState(180);
    match(AluminumParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Passed_argumentsContext ------------------------------------------------------------------

AluminumParser::Passed_argumentsContext::Passed_argumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AluminumParser::ExpressionContext *> AluminumParser::Passed_argumentsContext::expression() {
  return getRuleContexts<AluminumParser::ExpressionContext>();
}

AluminumParser::ExpressionContext* AluminumParser::Passed_argumentsContext::expression(size_t i) {
  return getRuleContext<AluminumParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> AluminumParser::Passed_argumentsContext::COMMA() {
  return getTokens(AluminumParser::COMMA);
}

tree::TerminalNode* AluminumParser::Passed_argumentsContext::COMMA(size_t i) {
  return getToken(AluminumParser::COMMA, i);
}


size_t AluminumParser::Passed_argumentsContext::getRuleIndex() const {
  return AluminumParser::RulePassed_arguments;
}

void AluminumParser::Passed_argumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPassed_arguments(this);
}

void AluminumParser::Passed_argumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AluminumListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPassed_arguments(this);
}


std::any AluminumParser::Passed_argumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<AluminumVisitor*>(visitor))
    return parserVisitor->visitPassed_arguments(this);
  else
    return visitor->visitChildren(this);
}

AluminumParser::Passed_argumentsContext* AluminumParser::passed_arguments() {
  Passed_argumentsContext *_localctx = _tracker.createInstance<Passed_argumentsContext>(_ctx, getState());
  enterRule(_localctx, 32, AluminumParser::RulePassed_arguments);
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
    setState(182);
    expression(0);
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AluminumParser::COMMA) {
      setState(183);
      match(AluminumParser::COMMA);
      setState(184);
      expression(0);
      setState(189);
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
  enterRule(_localctx, 34, AluminumParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(192);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::TRUE:
      case AluminumParser::FALSE:
      case AluminumParser::INT_LITERAL:
      case AluminumParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(190);
        literal_val();
        break;
      }

      case AluminumParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(191);
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
  enterRule(_localctx, 36, AluminumParser::RuleLiteral_val);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(197);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::INT_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(194);
        match(AluminumParser::INT_LITERAL);
        break;
      }

      case AluminumParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(195);
        match(AluminumParser::FLOAT_LITERAL);
        break;
      }

      case AluminumParser::TRUE:
      case AluminumParser::FALSE: {
        enterOuterAlt(_localctx, 3);
        setState(196);
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
  enterRule(_localctx, 38, AluminumParser::RuleBool_literal);
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
    setState(199);
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
  enterRule(_localctx, 40, AluminumParser::RuleVar_val);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
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
  enterRule(_localctx, 42, AluminumParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(205);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AluminumParser::INT:
      case AluminumParser::FLOAT:
      case AluminumParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(203);
        default_type();
        break;
      }

      case AluminumParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(204);
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
  enterRule(_localctx, 44, AluminumParser::RuleDefault_type);
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
    setState(207);
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
  enterRule(_localctx, 46, AluminumParser::RuleCustom_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
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
    case 13: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

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
