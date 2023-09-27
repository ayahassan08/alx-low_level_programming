#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the list
 * @idx: the index of the list where the new node should be added
 * @n: the new nodes to be added
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *avaiNode;
	unsigned int x = 1;

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
		{
			return (NULL);
		}
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	avaiNode = *head;

	while (x < idx && avaiNode != NULL)
	{
		avaiNode = avaiNode->next;
		x += 1;
	}
	if (x != idx && avaiNode == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = avaiNode->next;
	avaiNode->next = newNode;

	return (newNode);
}
