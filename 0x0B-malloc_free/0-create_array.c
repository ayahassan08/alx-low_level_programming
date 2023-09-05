#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: integer to be checked
 * @c: character to be checked
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails
 *
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i += 1)
	{
		arr[i] = c;
	}
	return (arr);
}
