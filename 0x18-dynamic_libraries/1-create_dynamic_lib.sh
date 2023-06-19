#!/bin/bash
gcc -fPIC -c *.c -o main.o
gcc -shared -o liball.so main.o

