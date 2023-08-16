#include "main.h"

/**
 * _islower - A funtction that checks for lowercase
 * @c: Charector  to be checked
 * Return: 1 (Success), Otherwise 0
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
