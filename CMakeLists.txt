cmake_minimum_required(VERSION 3.24)
project(Aluminum)

set(CMAKE_CXX_STANDARD 17)

add_executable(aluminum src/main.cpp src/CustomAluminumListener.cpp)

# for the generated lexer/parser with antlr
include_directories(front_end/gen)

# for the antler dependencies
add_subdirectory(antlr4/runtime/Cpp)
include_directories(antlr4/runtime/Cpp/runtime/src)
