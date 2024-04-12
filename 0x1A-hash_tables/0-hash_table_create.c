#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: he size of the array
* Return: a pointer to the newly created hash table
* If something went wrong, your function should return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *xTable;
	unsigned long int x;

	xTable = malloc(sizeof(hash_table_t));
	if (xTable == NULL)
	{
		return (NULL);
	}

	xTable->size = size;
	xTable->array = malloc(sizeof(hash_node_t *) * size);

	if (xTable->array == NULL)
	{
		free(xTable);
		return (NULL);
	}

	for (x = 0; x < size; x += 1)
	{
		xTable->array[x] = NULL;
	}

	return (xTable);
}
