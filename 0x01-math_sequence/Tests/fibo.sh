#!/bin/bash

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format ../1-fibonacci.c fibo.c -o fibonacci.o;

./fibonacci.o

