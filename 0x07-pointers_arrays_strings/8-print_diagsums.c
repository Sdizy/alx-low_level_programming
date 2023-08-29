#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: intager
 * @size: sum
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sumA, sumB, i;

	sumA = 0;
	sumB = 0;

	for (i = 0; i < size; i++)
	{
		sumA = sumA + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumB += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sumA, sumB);
}
