#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the list
 * Return: Always 0 (Success)
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;

		head = node->next;

		free(node);
	}
}
