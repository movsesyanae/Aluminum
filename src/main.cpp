#include <iostream>
#include <antlr4-common.h>
#include <fstream>
#include "ANTLRInputStream.h"
#include "AluminumLexer.h"
#include "AluminumParser.h"

int main() {
    std::ifstream stream;
    stream.open("sample_code/hello_world.al");
    antlr4::ANTLRInputStream input(stream);
//
    Aluminum::AluminumLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    Aluminum::AluminumParser parser(&tokens);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
