#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the list
 * @str: a string to be checked
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *lastNode = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (lastNode->next)
	{
		lastNode = lastNode->next;
	}

	lastNode->next = newNode;

	return (newNode);
}
