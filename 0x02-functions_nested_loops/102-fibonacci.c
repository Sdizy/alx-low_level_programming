#include <stdio.h>

/**
 * main - A  program that prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ")
	}
	return (0);
}
