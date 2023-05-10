
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
      "T__0", "LPAREN", "RPAREN", "EOL", "LCURL", "RCURL", "ARROW", "DOT", 
      "COMMA", "GREATEREQUAL", "GREATER", "LESSEQUAL", "LESS", "NOT", "EQUALS", 
      "TAKE", "SET", "MAIN", "IF", "ELSE", "WHILE", "DEFINE", "FUNCTION", 
      "VARIABLE", "INT", "FLOAT", "BOOL", "TRUE", "FALSE", "IDENTIFIER", 
      "MUL", "DIV", "ADD", "SUB", "INT_LITERAL", "FLOAT_LITERAL", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,37,223,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,
  	5,1,5,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,
  	1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,
  	1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,
  	1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,29,4,29,180,8,29,11,29,12,29,181,1,29,5,29,185,8,29,
  	10,29,12,29,188,9,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,3,34,
  	199,8,34,1,34,4,34,202,8,34,11,34,12,34,203,1,35,3,35,207,8,35,1,35,4,
  	35,210,8,35,11,35,12,35,211,1,35,1,35,4,35,216,8,35,11,35,12,35,217,1,
  	36,1,36,1,36,1,36,0,0,37,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,
  	22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,
  	67,34,69,35,71,36,73,37,1,0,4,3,0,65,90,95,95,97,122,4,0,48,57,65,90,
  	95,95,97,122,1,0,48,57,3,0,9,10,13,13,32,32,229,0,1,1,0,0,0,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,
  	0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,
  	0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,1,75,1,0,0,0,3,80,1,0,0,0,5,82,
  	1,0,0,0,7,84,1,0,0,0,9,86,1,0,0,0,11,88,1,0,0,0,13,90,1,0,0,0,15,93,1,
  	0,0,0,17,95,1,0,0,0,19,97,1,0,0,0,21,100,1,0,0,0,23,102,1,0,0,0,25,105,
  	1,0,0,0,27,107,1,0,0,0,29,109,1,0,0,0,31,111,1,0,0,0,33,116,1,0,0,0,35,
  	120,1,0,0,0,37,125,1,0,0,0,39,128,1,0,0,0,41,133,1,0,0,0,43,139,1,0,0,
  	0,45,143,1,0,0,0,47,148,1,0,0,0,49,152,1,0,0,0,51,156,1,0,0,0,53,162,
  	1,0,0,0,55,167,1,0,0,0,57,172,1,0,0,0,59,179,1,0,0,0,61,189,1,0,0,0,63,
  	191,1,0,0,0,65,193,1,0,0,0,67,195,1,0,0,0,69,198,1,0,0,0,71,206,1,0,0,
  	0,73,219,1,0,0,0,75,76,5,99,0,0,76,77,5,117,0,0,77,78,5,115,0,0,78,79,
  	5,116,0,0,79,2,1,0,0,0,80,81,5,40,0,0,81,4,1,0,0,0,82,83,5,41,0,0,83,
  	6,1,0,0,0,84,85,5,59,0,0,85,8,1,0,0,0,86,87,5,123,0,0,87,10,1,0,0,0,88,
  	89,5,125,0,0,89,12,1,0,0,0,90,91,5,45,0,0,91,92,5,62,0,0,92,14,1,0,0,
  	0,93,94,5,46,0,0,94,16,1,0,0,0,95,96,5,44,0,0,96,18,1,0,0,0,97,98,5,62,
  	0,0,98,99,5,61,0,0,99,20,1,0,0,0,100,101,5,62,0,0,101,22,1,0,0,0,102,
  	103,5,60,0,0,103,104,5,61,0,0,104,24,1,0,0,0,105,106,5,60,0,0,106,26,
  	1,0,0,0,107,108,5,126,0,0,108,28,1,0,0,0,109,110,5,61,0,0,110,30,1,0,
  	0,0,111,112,5,116,0,0,112,113,5,97,0,0,113,114,5,107,0,0,114,115,5,101,
  	0,0,115,32,1,0,0,0,116,117,5,115,0,0,117,118,5,101,0,0,118,119,5,116,
  	0,0,119,34,1,0,0,0,120,121,5,109,0,0,121,122,5,97,0,0,122,123,5,105,0,
  	0,123,124,5,110,0,0,124,36,1,0,0,0,125,126,5,105,0,0,126,127,5,102,0,
  	0,127,38,1,0,0,0,128,129,5,101,0,0,129,130,5,108,0,0,130,131,5,115,0,
  	0,131,132,5,101,0,0,132,40,1,0,0,0,133,134,5,119,0,0,134,135,5,104,0,
  	0,135,136,5,105,0,0,136,137,5,108,0,0,137,138,5,101,0,0,138,42,1,0,0,
  	0,139,140,5,100,0,0,140,141,5,101,0,0,141,142,5,102,0,0,142,44,1,0,0,
  	0,143,144,5,102,0,0,144,145,5,117,0,0,145,146,5,110,0,0,146,147,5,99,
  	0,0,147,46,1,0,0,0,148,149,5,118,0,0,149,150,5,97,0,0,150,151,5,114,0,
  	0,151,48,1,0,0,0,152,153,5,105,0,0,153,154,5,110,0,0,154,155,5,116,0,
  	0,155,50,1,0,0,0,156,157,5,102,0,0,157,158,5,108,0,0,158,159,5,111,0,
  	0,159,160,5,97,0,0,160,161,5,116,0,0,161,52,1,0,0,0,162,163,5,98,0,0,
  	163,164,5,111,0,0,164,165,5,111,0,0,165,166,5,108,0,0,166,54,1,0,0,0,
  	167,168,5,116,0,0,168,169,5,114,0,0,169,170,5,117,0,0,170,171,5,101,0,
  	0,171,56,1,0,0,0,172,173,5,102,0,0,173,174,5,97,0,0,174,175,5,108,0,0,
  	175,176,5,115,0,0,176,177,5,101,0,0,177,58,1,0,0,0,178,180,7,0,0,0,179,
  	178,1,0,0,0,180,181,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,186,1,
  	0,0,0,183,185,7,1,0,0,184,183,1,0,0,0,185,188,1,0,0,0,186,184,1,0,0,0,
  	186,187,1,0,0,0,187,60,1,0,0,0,188,186,1,0,0,0,189,190,5,42,0,0,190,62,
  	1,0,0,0,191,192,5,47,0,0,192,64,1,0,0,0,193,194,5,43,0,0,194,66,1,0,0,
  	0,195,196,5,45,0,0,196,68,1,0,0,0,197,199,5,45,0,0,198,197,1,0,0,0,198,
  	199,1,0,0,0,199,201,1,0,0,0,200,202,7,2,0,0,201,200,1,0,0,0,202,203,1,
  	0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,70,1,0,0,0,205,207,5,45,0,0,
  	206,205,1,0,0,0,206,207,1,0,0,0,207,209,1,0,0,0,208,210,7,2,0,0,209,208,
  	1,0,0,0,210,211,1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,213,1,0,0,
  	0,213,215,3,15,7,0,214,216,7,2,0,0,215,214,1,0,0,0,216,217,1,0,0,0,217,
  	215,1,0,0,0,217,218,1,0,0,0,218,72,1,0,0,0,219,220,7,3,0,0,220,221,1,
  	0,0,0,221,222,6,36,0,0,222,74,1,0,0,0,8,0,181,186,198,203,206,211,217,
  	1,6,0,0
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
