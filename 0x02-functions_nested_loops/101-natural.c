#include <stdio.h>
/**
 * main - A program, that computes the sum of multiples
 * Return: 0
 */

int main(void)
{
	int a, sum = 0;
	
	for (a = 0; i < 1024; i++)
	{
		if((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	}
	printf("%d\n", sum);

	return (0);
}
