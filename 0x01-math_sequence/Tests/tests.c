#include "../holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	complex c1;
	int task_num = 0;

	(void)argc;

	if (argc > 2)
		return (-1);

	if (argc == 2)
		task_num = atoi(argv[1]);

	switch (task_num)
	{
	case 0:
		c1.re = 1;
		c1.im = 2;
		display_complex_number(c1);
		c1.re = 1;
		c1.im = 0;
		display_complex_number(c1);
		break;
	
	case 1:

		break;
	default:
		break;
	}
	return (0);
}
