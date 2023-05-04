#include <iostream>
#include <antlr4-common.h>
#include <antlr4-runtime.h>
#include <fstream>
#include "ANTLRInputStream.h"
#include "AluminumLexer.h"
#include "AluminumParser.h"
#include "CustomAluminumVisitor.cpp"
#include "AluminumBaseVisitor.h"

int main() {
    std::ifstream stream;
    stream.open("../sample_code/hello_world.al");

    if(stream.is_open()) std::cout << "is open" << std::endl;
    antlr4::ANTLRInputStream input(stream);
    std::cout << input.toString() << std::endl;
//
    Aluminum::AluminumLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    Aluminum::AluminumParser parser(&tokens);

    auto tree = parser.program();
    std::cout << tree->toString();
    Aluminum::CustomAluminumVisitor* vis = new Aluminum::CustomAluminumVisitor();
    vis->visitProgram(tree);
    Aluminum::AluminumBaseVisitor base_vis;
    base_vis.visit(tree);
    antlr4::tree::ParseTree* parseTree = parser.function();
    std::cout << parseTree->toStringTree(true);


    std::cout << "Hello, World!" << std::endl;
//    for(antlr4::Token* tok: tokens.getTokens()) {
//        std::cout << "1";
//        std::cout << tok->toString();
//    }

//    antlr4::Token* tok = parser.getCurrentToken();
//    std::cout << tok->toString();
    return 0;
}
