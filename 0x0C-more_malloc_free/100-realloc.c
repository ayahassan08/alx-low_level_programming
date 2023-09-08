#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: If new_size == old_size do not do anything and return ptr
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *point;
	char *x;
	unsigned int n;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	point = malloc(new_size);

	if (point == NULL)
	{
		return (NULL);
	}

	x = (char *)ptr;

	for (n = 0; n < old_size && n < new_size; n += 1)
	{
		point[n] = x[n];
	}

	free(ptr);

	return ((void *)point);
}
