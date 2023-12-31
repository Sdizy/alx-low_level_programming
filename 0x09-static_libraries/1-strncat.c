#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * this function will use n bytes from src.
 * @n: bytes to be used
 * @src: string
 * @dest: string
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

