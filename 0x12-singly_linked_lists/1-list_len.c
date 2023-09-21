#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer to the list
 * Return: the number of elements
*/

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes += 1;
	}

	return (nodes);
}
