#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function taht frees a 2D array
 * @grid: grid to free array
 * @height: height of grid
 * Return: Blank
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid[i]);
}
