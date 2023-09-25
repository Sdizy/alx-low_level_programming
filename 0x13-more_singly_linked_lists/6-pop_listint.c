#include "lists.h"

/**
 * pop_listint - A function that deletes the head of a listint_t list
 * @head: double pointer
 * Return: head node's data (n),
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
