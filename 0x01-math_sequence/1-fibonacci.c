#include "fibonacci.h"
/**
 * gold_number - nummber
 * @head: linked list
 * Return: gold number
 */
double gold_number(struct Fibo *head)
{
	double f_c, f_b;

	f_c = head->elt;
	head = head->next;
	f_b = head->elt;
	return (f_c / f_b);
}
/**
 * Fibonnaci - Fibonacci sequence until having a geometric behavior
 * Return: linked list
 */
struct Fibo *Fibonnaci()
{
	struct Fibo *head = NULL, *new;
	int f_a = 0, f_c = 1, f_b = 0, lim = 20;

	while (lim)
	{
		f_a = f_c + f_b;

		new = malloc(sizeof(struct Fibo));
		new->elt = f_c;
		new->next = head;
		head = new;

		f_b = f_c;
		f_c = f_a;

		lim--;
	}

	return (head);
}
