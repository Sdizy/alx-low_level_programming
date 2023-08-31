#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x
 * raised to the power y
 * @x: The value
 * @y: The exponent
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
