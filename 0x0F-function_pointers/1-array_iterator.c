#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - A function that excecutes a fuction given as paremiter
 * on each element of an arry
 * @array: array
 * @size: size of elements to print
 * @action: pointer to print
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

