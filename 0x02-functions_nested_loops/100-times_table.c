#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the numbers to be printed
*/

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	int x, y;

	for (x = 0; x <= n; x += 1)
	{
		for (y = 0; y <= n; y += 1)
		{
			printf("%d, ", x * y);
		}

		printf("\n");
	}

}
