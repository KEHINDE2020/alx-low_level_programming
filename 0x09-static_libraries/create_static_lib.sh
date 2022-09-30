#!/bin/bash
gcc -c -Wall -wextra -werror -pedantic -c *.c
ar rc liball.a *.o
