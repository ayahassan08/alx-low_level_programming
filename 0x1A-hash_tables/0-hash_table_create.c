#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: he size of the array
* Return: a pointer to the newly created hash table
* If something went wrong, your function should return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = calloc(1, sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

