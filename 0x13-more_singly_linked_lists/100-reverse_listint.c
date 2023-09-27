#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to a pointer to the list
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *preNode = NULL;
	listint_t *avaiNode = *head;
	listint_t *folNode = NULL;

	while (avaiNode != NULL)
	{
		folNode = avaiNode->next;

		avaiNode->next = preNode;

		preNode = avaiNode;

		avaiNode = folNode;
	}

	*head = preNode;

	return (*head);
}
