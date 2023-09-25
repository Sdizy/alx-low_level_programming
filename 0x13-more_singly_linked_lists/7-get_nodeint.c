#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer
 * @index: index of the node
 * Return: if the node doesn't exist NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
