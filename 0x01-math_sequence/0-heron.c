#include "heron.h"

/**
 * heron - function that return the Heron sequence until
 * having convergence with an error less or equal to 10^-7
 * @p: The number to find its approximate square root
 * @x0: The initial value of the Heron sequence
 * Return: single linked list;
 */
t_cell *heron(double p, double x0)
{
	double fx = 0, _error = 0;

	t_cell *head = NULL, *new = NULL, *tail;

	new = malloc(sizeof(head));
	if (!new)
		return (NULL);

	fx = x0;

	head = new;
	new->elt = fx;
	new->next = NULL;
	_error = ((fx * fx) - p);
	_error = (_error >= 0) ? _error : -(_error);
	if (_error <= 0.0000001)
		return (head);

	fx = (0.5) * (x0 + (p / x0));
	head = heron(p, fx);
}
