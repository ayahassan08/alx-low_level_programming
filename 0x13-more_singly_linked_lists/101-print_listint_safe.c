#include "lists.h"

size_t listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * listint_len - gets the number of nodes
 * @head: a pointer to the list
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *firstNode, *lastNode;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	firstNode = head->next;
	lastNode = (head->next)->next;

	while (lastNode)
	{
		if (firstNode == lastNode)
		{
			firstNode = head;
			while (firstNode != lastNode)
			{
				node += 1;
				firstNode = firstNode->next;
				lastNode = lastNode->next;
			}

			firstNode = firstNode->next;

			while (firstNode != lastNode)
			{
				node += 1;
				firstNode = firstNode->next;
			}

			return (node);
		}

		firstNode = firstNode->next;
		lastNode = (lastNode->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the list
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node += 1)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
