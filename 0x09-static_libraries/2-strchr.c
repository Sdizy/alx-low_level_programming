#include "main.h"

/**
 * _strchr - A functin that locate a character in a stringi
 * @c: Char
 * @s: string
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
