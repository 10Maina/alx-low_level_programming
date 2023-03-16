#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -гс liball.a *.o
ranlib liball.a
