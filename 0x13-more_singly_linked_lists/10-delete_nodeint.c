#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: a pointer to a pointer to the list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: delete_nodeint_at_index
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *avaiNode, *preNode;
	unsigned int x = 0;

	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}
		avaiNode = *head;
		*head = (*head)->next;

		free(avaiNode);

		return (1);
	}

	avaiNode = *head;
	preNode = NULL;

	while (x < index && avaiNode != NULL)
	{
		preNode = avaiNode;
		avaiNode = avaiNode->next;
		x += 1;
	}

	if (avaiNode == NULL)
	{
		return (-1);
	}

	preNode->next = avaiNode->next;

	free(avaiNode);

	return (-1);
}
