#!/bin/bash
gcc -wall -pedantic -wextra -c -werror -fPIC *.c
gcc -o -shared liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
