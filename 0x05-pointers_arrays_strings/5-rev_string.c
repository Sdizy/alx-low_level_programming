#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: String to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int now = 0;
	int i;

	while (s[now] != '\0')
		now++;
	for (i = 0; i < now; i++)
	{
		now--;
		rev = s[i];
		s[i] = s[now];
		s[now] = rev;
	}
}
