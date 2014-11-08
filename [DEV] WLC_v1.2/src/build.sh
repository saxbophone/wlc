#!/bin/bash
#Compile script for Word Ladder cracker on Unix-like systems. Works on Linux, anyways.
echo "Building"
cd "${0%/*}"
cd ..
g++ 'src/wlc.cpp' -o 'bin/wlc'
