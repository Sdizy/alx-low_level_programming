#include <stdio.h>
/**
 * main -A rogram that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
