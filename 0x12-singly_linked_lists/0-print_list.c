#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the list
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		/* moving to the next node by setting h to h->next */
		h = h->next;
		nodes += 1;
	}

	return (nodes);
}