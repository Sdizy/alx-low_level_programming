#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of a string given as parameter
 * @str: String
 * Return: NULL if str = 0, pointer to duplicated sting (Success)
 */

char *_strdup(char *str)
{
	char *test;
	int a, b = 0;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;
	test = malloc(sizeof(char) * (a + 1));

	if (test == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		test[b] = str[b];
	return (test);
}
