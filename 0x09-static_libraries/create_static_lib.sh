#!/bin/bash
gcc -Wall -pedantic -Werror _wextra -c *.c
ar rc liball.a *.o
