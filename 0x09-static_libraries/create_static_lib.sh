#!/bin/bash  
gcc -g -O -c *.c
ar rcs liball.a *.c
ranlib liball.a
