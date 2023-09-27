#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to the first node
 * Return: Always 0 (Success)
*/

void free_listint2(listint_t **head)
{
	listint_t *node2;

	while (*head)
	{
		node2 = (*head)->next;

		free(*head);

		*head = node2;
	}
}
