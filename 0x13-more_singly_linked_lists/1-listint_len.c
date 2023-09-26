#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to the list
 * Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nodesNum = 0;

	while (h != NULL)
	{
		h = h->next;

		nodesNum += 1;
	}

	return (nodesNum);
}
