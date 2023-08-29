#include "main.h"

/**
 * set_string - A function that sets a value of a pointer to a char
 * @s: pointer that points to a pointer
 * @to: pointer that points to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
