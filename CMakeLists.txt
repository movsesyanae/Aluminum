cmake_minimum_required(VERSION 3.16)
project(Aluminum)

set(CMAKE_CXX_STANDARD 17)

#add_executable(aluminum src/main.cpp)

## for the generated lexer/parser with antlr
#include_directories(front_end/gen)
#
## for the antler dependencies
#set(ANTLR4_INSTALL ON)
#add_subdirectory(antlr4/runtime/Cpp)
#include_directories(antlr4/runtime/Cpp/runtime/src)
#link_libraries(LIBANTLR4)


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


# CMakeLists.txt

#CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

LIST( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )
# ...
#SET (CMAKE_CXX_STANDARD 14)

# add external build for antlrcpp
# ...

# CMakeLists.txt

# set variable pointing to the antlr tool that supports C++
set(ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/external_libraries/antlr/antlr-4.12.0-complete.jar)
include( ExternalAntlr4Cpp )



# CMakeLists.txt

# Include the runtime to compile against
include_directories( ${ANTLR4CPP_INCLUDE_DIRS} )
link_directories( ${ANTLR4CPP_LIBS} )
message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS} ")

# Call macro to add lexer and grammar to your build dependencies.
# NOTE: Here, we define "Aluminum" as our project's namespace
antlr4cpp_process_grammar(demo Aluminum
        ${CMAKE_CURRENT_SOURCE_DIR}/grammar/Aluminum.g4)
# include generated files in project environment

message("antlr4cpp_include_dirs_Aluminum: ${antlr4cpp_include_dirs_Aluminum}")
message("antlr4cpp_generation_Aluminum: ${antlr4cpp_generation_Aluminum}")
# CMakeLists.txt

# add generated grammar to demo binary target
add_executable(test_antlr src/main.cpp ${antlr4cpp_src_files_Aluminum})
add_dependencies(test_antlr antlr4cpp antlr4cpp_generation_Aluminum)
target_link_libraries(test_antlr antlr4-runtime)
include_directories(${antlr4cpp_include_dirs_Aluminum})
#include_directories(${antlr4cpp_generation_Aluminum})

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_link_libraries(test_antlr Threads::Threads)







