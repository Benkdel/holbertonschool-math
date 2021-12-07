#!/bin/bash

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format ../0-heron.c hero.c -o heron.o;

./heron.o
