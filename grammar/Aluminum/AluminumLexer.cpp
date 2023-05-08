
// Generated from /home/alex/Programming/CMSC838E/Aluminum/grammar/Aluminum.g4 by ANTLR 4.12.0


#include "AluminumLexer.h"


using namespace antlr4;

using namespace Aluminum;


using namespace antlr4;

namespace {

struct AluminumLexerStaticData final {
  AluminumLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  AluminumLexerStaticData(const AluminumLexerStaticData&) = delete;
  AluminumLexerStaticData(AluminumLexerStaticData&&) = delete;
  AluminumLexerStaticData& operator=(const AluminumLexerStaticData&) = delete;
  AluminumLexerStaticData& operator=(AluminumLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag aluminumlexerLexerOnceFlag;
AluminumLexerStaticData *aluminumlexerLexerStaticData = nullptr;

void aluminumlexerLexerInitialize() {
  assert(aluminumlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<AluminumLexerStaticData>(
    std::vector<std::string>{
      "T__0", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOR", 
      "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS", "EQUALS", 
      "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", "FUNCTION", 
      "VARIABLE", "INT", "IDENTIFIER", "MUL", "DIV", "ADD", "SUB", "INT_LITERAL", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'cust'", "'('", "')'", "';'", "'{'", "'}'", "'->'", "'.'", "','", 
      "'>='", "'>'", "'<='", "'<'", "'='", "'take'", "'set'", "'main'", 
      "'if'", "'else'", "'while'", "'def'", "'func'", "'var'", "'int'", 
      "", "'*'", "'/'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOR", 
      "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS", "EQUALS", 
      "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", "FUNCTION", 
      "VARIABLE", "INT", "IDENTIFIER", "MUL", "DIV", "ADD", "SUB", "INT_LITERAL", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,31,173,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,
  	1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,
  	1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,4,24,144,8,24,11,24,
  	12,24,145,1,24,5,24,149,8,24,10,24,12,24,152,9,24,1,25,1,25,1,26,1,26,
  	1,27,1,27,1,28,1,28,1,29,3,29,163,8,29,1,29,4,29,166,8,29,11,29,12,29,
  	167,1,30,1,30,1,30,1,30,0,0,31,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,1,0,4,
  	3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,9,10,
  	13,13,32,32,176,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,
  	31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,
  	0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,
  	0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,1,
  	63,1,0,0,0,3,68,1,0,0,0,5,70,1,0,0,0,7,72,1,0,0,0,9,74,1,0,0,0,11,76,
  	1,0,0,0,13,78,1,0,0,0,15,81,1,0,0,0,17,83,1,0,0,0,19,85,1,0,0,0,21,88,
  	1,0,0,0,23,90,1,0,0,0,25,93,1,0,0,0,27,95,1,0,0,0,29,97,1,0,0,0,31,102,
  	1,0,0,0,33,106,1,0,0,0,35,111,1,0,0,0,37,114,1,0,0,0,39,119,1,0,0,0,41,
  	125,1,0,0,0,43,129,1,0,0,0,45,134,1,0,0,0,47,138,1,0,0,0,49,143,1,0,0,
  	0,51,153,1,0,0,0,53,155,1,0,0,0,55,157,1,0,0,0,57,159,1,0,0,0,59,162,
  	1,0,0,0,61,169,1,0,0,0,63,64,5,99,0,0,64,65,5,117,0,0,65,66,5,115,0,0,
  	66,67,5,116,0,0,67,2,1,0,0,0,68,69,5,40,0,0,69,4,1,0,0,0,70,71,5,41,0,
  	0,71,6,1,0,0,0,72,73,5,59,0,0,73,8,1,0,0,0,74,75,5,123,0,0,75,10,1,0,
  	0,0,76,77,5,125,0,0,77,12,1,0,0,0,78,79,5,45,0,0,79,80,5,62,0,0,80,14,
  	1,0,0,0,81,82,5,46,0,0,82,16,1,0,0,0,83,84,5,44,0,0,84,18,1,0,0,0,85,
  	86,5,62,0,0,86,87,5,61,0,0,87,20,1,0,0,0,88,89,5,62,0,0,89,22,1,0,0,0,
  	90,91,5,60,0,0,91,92,5,61,0,0,92,24,1,0,0,0,93,94,5,60,0,0,94,26,1,0,
  	0,0,95,96,5,61,0,0,96,28,1,0,0,0,97,98,5,116,0,0,98,99,5,97,0,0,99,100,
  	5,107,0,0,100,101,5,101,0,0,101,30,1,0,0,0,102,103,5,115,0,0,103,104,
  	5,101,0,0,104,105,5,116,0,0,105,32,1,0,0,0,106,107,5,109,0,0,107,108,
  	5,97,0,0,108,109,5,105,0,0,109,110,5,110,0,0,110,34,1,0,0,0,111,112,5,
  	105,0,0,112,113,5,102,0,0,113,36,1,0,0,0,114,115,5,101,0,0,115,116,5,
  	108,0,0,116,117,5,115,0,0,117,118,5,101,0,0,118,38,1,0,0,0,119,120,5,
  	119,0,0,120,121,5,104,0,0,121,122,5,105,0,0,122,123,5,108,0,0,123,124,
  	5,101,0,0,124,40,1,0,0,0,125,126,5,100,0,0,126,127,5,101,0,0,127,128,
  	5,102,0,0,128,42,1,0,0,0,129,130,5,102,0,0,130,131,5,117,0,0,131,132,
  	5,110,0,0,132,133,5,99,0,0,133,44,1,0,0,0,134,135,5,118,0,0,135,136,5,
  	97,0,0,136,137,5,114,0,0,137,46,1,0,0,0,138,139,5,105,0,0,139,140,5,110,
  	0,0,140,141,5,116,0,0,141,48,1,0,0,0,142,144,7,0,0,0,143,142,1,0,0,0,
  	144,145,1,0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,150,1,0,0,0,147,149,
  	7,1,0,0,148,147,1,0,0,0,149,152,1,0,0,0,150,148,1,0,0,0,150,151,1,0,0,
  	0,151,50,1,0,0,0,152,150,1,0,0,0,153,154,5,42,0,0,154,52,1,0,0,0,155,
  	156,5,47,0,0,156,54,1,0,0,0,157,158,5,43,0,0,158,56,1,0,0,0,159,160,5,
  	45,0,0,160,58,1,0,0,0,161,163,5,45,0,0,162,161,1,0,0,0,162,163,1,0,0,
  	0,163,165,1,0,0,0,164,166,7,2,0,0,165,164,1,0,0,0,166,167,1,0,0,0,167,
  	165,1,0,0,0,167,168,1,0,0,0,168,60,1,0,0,0,169,170,7,3,0,0,170,171,1,
  	0,0,0,171,172,6,30,0,0,172,62,1,0,0,0,5,0,145,150,162,167,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  aluminumlexerLexerStaticData = staticData.release();
}

}

AluminumLexer::AluminumLexer(CharStream *input) : Lexer(input) {
  AluminumLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *aluminumlexerLexerStaticData->atn, aluminumlexerLexerStaticData->decisionToDFA, aluminumlexerLexerStaticData->sharedContextCache);
}

AluminumLexer::~AluminumLexer() {
  delete _interpreter;
}

std::string AluminumLexer::getGrammarFileName() const {
  return "Aluminum.g4";
}

const std::vector<std::string>& AluminumLexer::getRuleNames() const {
  return aluminumlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& AluminumLexer::getChannelNames() const {
  return aluminumlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& AluminumLexer::getModeNames() const {
  return aluminumlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& AluminumLexer::getVocabulary() const {
  return aluminumlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView AluminumLexer::getSerializedATN() const {
  return aluminumlexerLexerStaticData->serializedATN;
}

const atn::ATN& AluminumLexer::getATN() const {
  return *aluminumlexerLexerStaticData->atn;
}




void AluminumLexer::initialize() {
  ::antlr4::internal::call_once(aluminumlexerLexerOnceFlag, aluminumlexerLexerInitialize);
}
