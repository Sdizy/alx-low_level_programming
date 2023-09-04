#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguments in it
 * @argc: Argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /* Don't pay attention to this line(arv)
		      * i only included it coz main takes 2 descr
		      */
	printf("%d\n", argc - 1);

	return (0);
}
