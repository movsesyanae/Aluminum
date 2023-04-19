#include <iostream>
#include "front_end/AluminumLexer.h"
#include "front_end/AluminumParser.h"
#include "antlr4-common.h"

int main() {
    std::ifstream stream;
    stream.open("sample_code/hello_world.al");
    antlr4::ANTLRInputStream input(stream);
//
//    front_end::AluminumLexer lexer(&input);
//    antlr4::CommonTokenStream tokens(&lexer);
//    front_end::AluminumParser parser(&tokens);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
