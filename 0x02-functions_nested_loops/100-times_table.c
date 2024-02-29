#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the numbers to be printed
*/

void print_times_table(int n)
{
	int x, y, result;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x += 1)
		{
			_putchar(48);

			for (y = 0; y <= n; y += 1)
			{
				_putchar('.');
				_putchar(' ');

				result = x * y;

				if (result <= 9)
					_putchar(' ');

				if (result <= 99)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				}

				else if (result <= 99 && result >= 10)
					_putchar((result / 10) + 48);

				_putchar((result % 10) + 48);
			}

			_putchar('\n');
		}
	}

}
