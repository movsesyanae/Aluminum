#!/bin/bash

# go into builds directory
mkdir external_library_builds
cd external_library_builds

if [ -d "antlr4" ]; then
  echo "Looks like antlr4 was already built."
else
  mkdir antlr4
  cd antlr4
  cmake ../../external_libraries/antlr4/runtime/Cpp -DCMAKE_BUILD_TYPE=Release
  DESTDIR=`pwd` make -j
  DESTDIR=`pwd` make install
  cd ..
fi


if [ -d "llvm" ]; then
  echo "Looks like llvm was already built."
else
  echo "building LLVM"
  mkdir llvm
  cd llvm
  echo "running cmake"
  cmake ../../external_libraries/llvm-project/llvm/ -DCMAKE_BUILD_TYPE=Release
  
  echo "running make"
  make -j

  echo "installing"
  dir=`pwd`
  cmake -DCMAKE_INSTALL_PREFIX=$dir -P cmake_install.cmake
fi

