#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int swap;

	while (first < last)
	{
		swap = a[first];
		a[first] = a[last];
		a[last] = swap;
		first += 1;
		last -= 1;
	}
}
