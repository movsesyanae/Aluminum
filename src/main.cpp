#include <iostream>
#include <antlr4-common.h>
#include <antlr4-runtime.h>
#include <fstream>
#include "ANTLRInputStream.h"
#include "AluminumLexer.h"
#include "AluminumParser.h"
#include "Aluminum_IR_Code_Generator.cpp"
#include "AluminumBaseVisitor.h"

int main(int argc, char** argv) {
    std::ifstream stream;
    std::string al_file = argv[1];
    stream.open(al_file);


    if(!stream.is_open()) return 1;
    antlr4::ANTLRInputStream input(stream);
    Aluminum::AluminumLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    Aluminum::AluminumParser parser(&tokens);

    auto tree = parser.program();
    std::string out_file = "al_code_gen.ll";
    Aluminum::Aluminum_IR_Code_Generator* vis = new Aluminum::Aluminum_IR_Code_Generator(out_file);
    vis->visitProgram(tree);
    return 0;
}
