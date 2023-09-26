#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodesNum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		nodesNum += 1;
	}

	return (nodesNum);
}
