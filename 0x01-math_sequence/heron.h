#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct Heron - struct
 * @elt: double number
 * @next: pointer
 */
struct t_cell
{
	double elt;
	struct t_cell *next;
};

struct t_cell *heron(double p, double x0);

#endif

