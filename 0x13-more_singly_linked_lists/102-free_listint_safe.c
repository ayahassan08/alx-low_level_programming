#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a pointer to a pointer to the list
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	size_t listSize = 0;
	int avaiNode;
	listint_t *nodes;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		avaiNode = *h - (*h)->next;

		if (avaiNode > 0)
		{
			nodes = (*h)->next;
			free(*h);
			*h = nodes;
			listSize += 1;
		}

		else
		{
			free(*h);
			*h = NULL;
			listSize += 1;
			break;
		}
	}

	*h = NULL;

	return (listSize);
}
