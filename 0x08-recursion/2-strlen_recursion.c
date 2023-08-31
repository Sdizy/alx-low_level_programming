#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: String
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
