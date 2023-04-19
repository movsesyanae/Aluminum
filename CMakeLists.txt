cmake_minimum_required(VERSION 3.24)
project(Aluminum)

set(CMAKE_CXX_STANDARD 17)

add_executable(aluminum src/main.cpp)

include_directories(front_end/gen)
