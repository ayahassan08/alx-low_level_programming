#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer to be checked
 * @max: integer to be checked
 * Return:the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
*/

int *array_range(int min, int max)
{
	int *x;
	int n, len;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	x = malloc(sizeof(*x) * len);

	if (x == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < len; n += 1)
	{
		x[n] = min + n;
	}

	return (x);
}
