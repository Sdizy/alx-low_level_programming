#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that searches for an int
 * @size: Number of element in an array
 * @array: array
 * @cmp: A pointer to the function to be used
 * Return: if size > 0 (success), otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
