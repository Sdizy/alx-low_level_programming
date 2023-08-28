#include "main.h"

/**
 * _memset - A function that files a memory with constant byte.
 * @s: memory area to be pointed to
 * @b: constant byte
 * @n: Number of bytes to be changed
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
