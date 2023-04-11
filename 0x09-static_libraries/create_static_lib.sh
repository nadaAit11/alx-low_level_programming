#!/bin/bash
gcc -Wall -petandic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
