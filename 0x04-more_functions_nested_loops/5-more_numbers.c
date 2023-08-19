#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int r, n;

	for (r = 1; r <= 10; r += 1)
	{
		for (n = 0; n <= 14; n += 1)
		{
			if (n >= 10)
			{
				_putchar('1');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
