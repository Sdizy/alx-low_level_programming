#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes c to stdout
 * @c: The character to be printed
 * Return: 1
 * on error, -1 should be returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
