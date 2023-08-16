#include "main.h"

/**
 * print_alphabet_x10 - A function that prints Alphabets 10 times
 * Return: 0;
 */

void print_alphabet_x10(void)
{
	int Num;
	char Alphabet;

	Num = 0;

	while (Num < 10)
	{
		Alphabet = 'a';
		while (Alphabet <= 'z')
		{
			_putchar(Alphabet);
			Alphabet++;
		}
		_putchar('\n');
		Num++;
	}
}
