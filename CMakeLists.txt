cmake_minimum_required(VERSION 3.16)
project(Aluminum)

set(CMAKE_CXX_STANDARD 17)

add_executable(aluminum src/main.cpp src/CustomAluminumListener.cpp)

# for the generated lexer/parser with antlr
include_directories(front_end/gen)

# for the antler dependencies
set(ANTLR4_INSTALL ON)
add_subdirectory(antlr4/runtime/Cpp)
include_directories(antlr4/runtime/Cpp/runtime/src)
link_libraries(LIBANTLR4)


#message("CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
#
#
## Bring in the required packages
#find_package(antlr4-runtime REQUIRED)
#
#
## add directories for generated include files
#include_directories( ${PROJECT_BINARY_DIR} ${ANTLR4_INCLUDE_DIR})
#
## add required runtime library
#add_dependencies( aluminum antlr4_shared )
#
#target_link_libraries( aluminum PRIVATE antlr4_shared)