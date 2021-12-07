#ifndef FIBO_H
#define FIBO_H

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

/**
 * struct Fibo - struct
 * @elt: number
 * @next: pointer
 */
struct Fibo
{
	int elt;
	struct Fibo *next;
};

double gold_number(struct Fibo *head);
struct Fibo *Fibonnaci();

#endif
