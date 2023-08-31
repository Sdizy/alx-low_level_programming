#include "main.h"

/**
 * factorial - A functiion that returns a factorial of a given number
 * @n: Factorial
 * Return: 0
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
