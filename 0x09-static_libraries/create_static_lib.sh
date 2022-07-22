#!/bin/bash  
gcc -g -O -c *.c
ar -rcs liball.a *.o
ranlib liball.a
