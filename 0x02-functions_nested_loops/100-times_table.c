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

	int x, y, result;

	for (x = 0; x <= n; x += 1)
	{
		for (y = 0; y <= n; y += 1)
		{
			result = x * y;

			if (y == 0)
			{
				printf("%d", result);
			}

			else
			{
				printf(", %3d", result);
			}

			printf("\n");
		}
	}

}
