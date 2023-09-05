#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A functiuon that creats an array of chars,
 * and initializes it with specific chars
 * @c: char to be initialized
 * @size: size of memory to print
 * Return: NULL if size = 0, pointer to a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
