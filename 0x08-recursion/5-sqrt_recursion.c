#include "main.h"

/**
 *  _sqrt_recursion - A function that retuirns the sqaure root of a num
 *  @n: Num to be checked
 *  Return: The value n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

/**
 * another_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @a: iterator
 *
 * Return: Results
 */
int another_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (another_sqrt_recursion(n, a + 1));
}

