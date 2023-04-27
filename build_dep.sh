#!/bin/bash

# go into builds directory
cd external_library_builds

if [ -d "antlr4" ]; then
  echo "Looks like antlr4 was already built."
else
  mkdir antlr4
  cd antlr4
  cmake ../../external_libraries/antlr4/runtime/Cpp -DCMAKE_BUILD_TYPE=Release
  DESTDIR=. make -j
  cd ..
fi


if [ -d "llvm" ]; then
  echo "Looks like antlr4 was already built."
else
  mkdir llvm
  cd llvm
  cmake ../../external_libraries/llvm-project/llvm/ -DLLVM_ENABLE_PROJECTS='clang;lldb;lld;mlir;clang-tools-extra;compiler-rt' -DCMAKE_BUILD_TYPE=Release
  make -j
  cd ..
fi

