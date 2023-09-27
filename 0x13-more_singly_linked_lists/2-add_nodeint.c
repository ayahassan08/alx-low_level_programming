#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to a pointer to the first node
 * @n: the new nodes to be added
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNodes;

	newNodes = malloc(sizeof(listint_t));

	if (newNodes == NULL)
	{
		return (NULL);
	}

	newNodes->n = n;

	newNodes->next = *head;

	*head = newNodes;

	return (newNodes);
}
