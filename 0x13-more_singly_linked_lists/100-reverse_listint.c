#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to a pointer to the list
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *preNode = NULL;
	listint_t *folNode = NULL;

	while (*head != NULL)
	{
		folNode = (*head)->next;

		(*head)->next = preNode;

		preNode = *head;

		*head = folNode;
	}

	*head = preNode;

	return (*head);
}
