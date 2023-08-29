#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @needle: Substring to be located
 * @haystack: string
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *c = needle;

		while (*i == *c && *c != '\0')
		{
			i++;
			c++;
		}
		if (*c == '\0')
			return (haystack);
	}
	return (0);
}
