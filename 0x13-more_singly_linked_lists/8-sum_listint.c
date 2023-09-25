#include "lists.h"

/**
 * sum_listint - A function that returns the data of all
 * the data (n) of a listint_t linked list.
 * @head: pointer
 * Return: If the list is empty, 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
