#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the list
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head != NULL)
	{
		if (x == index)
		{
			return (head);
		}

		x += 1;

		head = head->next;
	}

	return (NULL);
}
