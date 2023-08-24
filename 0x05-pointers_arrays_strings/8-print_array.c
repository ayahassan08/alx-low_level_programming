#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be checked
 * @n: number of elements of the array to be printed
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i += 1;
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
