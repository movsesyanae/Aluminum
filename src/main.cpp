#include <iostream>
#include <antlr4-common.h>
#include <fstream>
#include "ANTLRInputStream.h"
#include "AluminumLexer.h"
#include "AluminumParser.h"
//#include "CustomAluminumListener.cpp"

int main() {
    std::ifstream stream;
    stream.open("sample_code/hello_world.al");
    antlr4::ANTLRInputStream input(stream);
//
    Aluminum::AluminumLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    Aluminum::AluminumParser parser(&tokens);

    std::cout << "Hello, World!" << std::endl;
//    for(antlr4::Token* tok: tokens.getTokens()) {
//        std::cout << "1";
//        std::cout << tok->toString();
//    }

//    antlr4::Token* tok = parser.getCurrentToken();
//    std::cout << tok->toString();
    return 0;
}
