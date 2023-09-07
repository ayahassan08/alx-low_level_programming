#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be checked
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}

	return (point);
}
