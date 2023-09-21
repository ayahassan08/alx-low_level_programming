#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the list
 * Return: Always 0 (Success)
*/

void free_list(list_t *head)
{
	list_t *avaiNode;

	while (head)
	{
		avaiNode = head;

		head = head->next;

		free(avaiNode->str);

		free(avaiNode);
	}
}
