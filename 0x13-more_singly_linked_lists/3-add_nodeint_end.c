#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the first node
 * @n: the new nodes to be added
 * Return: adds a new node at the end of a listint_t list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
	}

	return (newNode);
}
