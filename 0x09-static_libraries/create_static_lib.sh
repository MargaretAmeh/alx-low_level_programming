#!/bin/bash
gcc -wwall -pedantic -werror -wextra -c *.c
ar rc liball.a *.o
