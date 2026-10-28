#!/usr/bin/env bash
set -eu
gcc --version
gdb --version
mkdir -p build
gcc -std=c11 -g -O0 -Wall -Wextra accumulator_bug.c -o build/accumulator_bug
gdb -q -batch -ex "break main" -ex run -ex "bt" -ex quit build/accumulator_bug
