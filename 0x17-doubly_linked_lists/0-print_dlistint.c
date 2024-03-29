#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a list
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x += 1;
	}

	return (x);
}
