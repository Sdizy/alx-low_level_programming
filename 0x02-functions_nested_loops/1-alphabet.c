#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - A function that prints alphabets in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char Alphabet;

		for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
		{
			_putchar(Alphabet);
		}
	_putchar('\n');
}
