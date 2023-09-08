#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of ints
 * @min: minimum range
 * @max: maximum range
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}
