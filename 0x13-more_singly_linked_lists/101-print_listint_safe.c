#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the list
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	const listint_t *avaiNode = head;
	const listint_t *nodes[1024];

	while (avaiNode != NULL)
	{
		size_t index;

		for (index = 0; index < x; index += 1)
		{
			if (nodes[index] == avaiNode)
			{
				printf("-> [%p] %d\n", (void *)avaiNode, avaiNode->n);

				exit(98);
			}
		}

		nodes[x] = avaiNode;
		x += 1;

		printf("[%p] %d\n", (void *)avaiNode, avaiNode->n);

		avaiNode = avaiNode->next;
	}

	return (x);
}
