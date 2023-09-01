#include "main.h"

/**
 *  _strlen - A function that prints the length of a string
 *  @s: string
 *  Return: Length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
