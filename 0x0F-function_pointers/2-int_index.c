#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Array to be checked
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i += 1)
	{
		if ((*cmp)(array[i]))
		{
		return (i);
		}
	}

	return (-1);
}
