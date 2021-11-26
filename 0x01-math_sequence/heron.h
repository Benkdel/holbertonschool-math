#ifndef HERO_H
#define HERO_H

/* macros */

#define alloc(t) (t *)malloc(sizeof(t))

/* includes */

/**
 * t_cell - struct of cells for hero iteration
 * 
 */
typedef struct t_cell
{
	double elt;
	double u0;
	t_cell *next;
} t_cell;

/* prototypes */
t_cell *heron(double p, double x0);

#endif
