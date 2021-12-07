#!/bin/bash

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format ../2-mandelbrot.c -o mand.o;

./mand.o
