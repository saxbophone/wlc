#!/bin/bash
#Compile script for Word Ladder cracker on Unix-like systems. Works on Linux, anyways.
cd "${0%/*}"
cd ..
g++ 'src/wlc.cpp' -o 'bin/wlc-1.1-linux'
