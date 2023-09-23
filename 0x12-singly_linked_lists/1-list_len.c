#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - A function that returns a number of elements
 * in a linked list_t list
 * @h: pointer
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
