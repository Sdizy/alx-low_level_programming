#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a Number
 * @a: The Value to be extracted from
 * Return: 0
 */

int print_last_digit(int a)
{
	int r;

	if (a < 0)

	a = -a;
	r = a % 10;

	if (r < 0)

	r = -r;
	_putchar(r + '0');

	return (r);
}

