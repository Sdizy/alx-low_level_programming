#include "main.h"

/**
 * print_line - A function that prints a straight line
 * @n: is the number of times the character _ should be printe
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

