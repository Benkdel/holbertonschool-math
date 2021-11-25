#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

/**
 * complex - struct for complex numbers
 * @re: real part of conjugate number
 * @im: imaginarty part of conjugate number
 */
typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif
