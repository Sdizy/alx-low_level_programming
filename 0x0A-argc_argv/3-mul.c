#include "main.h"
#include <stdio.h>

/**
 * _mult - A program that multiplies two numbers
 * @s: string
 * Return: Multiplication results
 */

int _mult(char *s)
{
	int a, b, c, dig, e, fil;

	a = 0;
	b = 0;
	c = 0;
	dig = 0;
	e = 0;
	fil = 0;

	while (s[dig] != '\0')
		dig++;
	while (a < dig && e == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
			fil = s[a] - '0';
			if (b % 2)
				fil = -fil;
			c = c * 10 + fil;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}

/**
 * main - A progrem that mult 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

		if (argc < 3 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}
	num1 = _mult(argv[1]);
	num2 = _mult(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
