#include "math.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of an array
 * @size: number of bytes to be checked
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *x;
	unsigned int n;

	void *point = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (point == NULL)
	{
		return (NULL);
	}

	x = (char *)point;

	while (n < nmemb * size)
	{
		x[n] = 0;
		n += 1;
	}

	return (point);
}
