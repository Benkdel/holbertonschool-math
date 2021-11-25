#include "holberton.h"

/**
 * addition - function that performs the addition operation to complex numbers.
 * @c1: complex 1
 * @c2: complex 2
 * @c3: result in complex 3
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
