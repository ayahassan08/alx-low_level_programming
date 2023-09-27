#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a pointer to a pointer to the list
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	size_t listSize = 0;
	listint_t *avaiNode = *h;
	listint_t *nodes;

	while (avaiNode != NULL)
	{
		nodes = avaiNode;

		avaiNode = avaiNode->next;

		free(nodes);

		listSize += 1;
	}

	*h = NULL;

	return (listSize);
}
