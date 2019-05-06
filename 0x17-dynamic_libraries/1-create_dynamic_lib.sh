#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fpic -c *.c && gcc -shared -o liball.so *.o
