#include "main.h"

/**
 * puts2 - A function that prints every other character of astring
 * starting with the first character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int length = 0;
	int i = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	i = length - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
	}
	}
	_putchar('\n');
}
