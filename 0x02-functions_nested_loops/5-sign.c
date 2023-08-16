#include "main.h"

/**
 * print_sign - A function that prints the sign of Numbers
 * @n: Value to be cheked
 * Return: 1 if positve, 0 if zero, -1 if negetive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
			return (-1);
}
