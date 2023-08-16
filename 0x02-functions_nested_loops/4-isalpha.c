#include "main.h"

/**
 * _isalpha - A function that checks for Alphabetic charectors
 * @c: Charecter to be checked
 * Return: 1 (Success), 0 Otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
