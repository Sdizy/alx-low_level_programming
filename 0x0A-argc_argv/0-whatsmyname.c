#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
