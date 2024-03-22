#include "lists.h"

/**
 * sum_dlistint -  returns sum of all the data (n) of a dlistint_t linked list
 * @head: head of the list
 * Return: if the list is empty, return 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sumList = 0;

	while (head)
	{
		sumList += head->n;
		head = head->next;
	}

	return (sumList);
}
