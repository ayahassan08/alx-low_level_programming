#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: a pointer to a pointer to the list
 * Return: if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *nodes;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	nodes = *head;

	*head = (*head)->next;

	n = nodes->n;

	free(nodes);

	return (n);
}
