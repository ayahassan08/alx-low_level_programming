#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a += 1)
	{
		_putchar('0');
		for (b = 0; b < 10; b += 1)
		{
			_putchar(' ');
			_putchar(',');

			c = a * b;

			if (c < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
