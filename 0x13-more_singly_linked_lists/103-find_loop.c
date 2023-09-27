#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the list
 * Return:  The address of the node where the loop starts,
 * or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *last = head;

	while (first && last && last->next)
	{
		first = first->next;

		last = last->next->next;

		if (first == last)
		{
			break;
		}
	}

	if (!first || !last || !last->next)
	{
		return (NULL);
	}

	first = head;

	while (first != last)
	{
		first = first->next;
		last = last->next;
	}

	return (first);
}
