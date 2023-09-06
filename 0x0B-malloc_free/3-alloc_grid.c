#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function thaty returns a pointer to a 2D array of int
 * @width: Width of array
 * @height: height of array
 * Return: NULL if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int **allc;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	allc =  malloc(sizeof(int *) * height);

	if (allc == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		allc[a] = malloc(sizeof(int) * width);

		if (allc[a] == NULL)
		{
			for (; a >= 0; a--)
				free(allc[a]);
			free(allc);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			allc[a][b] = 0;
	}
	return (allc);
}
