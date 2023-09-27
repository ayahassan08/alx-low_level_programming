#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the list
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head, *fast_ptr = head;
	size_t count = 0;

	if (head == NULL)
	{
		printf("-> [%p] %d\n", (void *)head, 0);
		exit(98);
	}

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			count++;
			exit(98);
		}
	}

	printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
	count++;

	return (count);
}
