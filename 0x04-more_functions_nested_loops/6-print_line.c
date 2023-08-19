#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: he number of times the character _ should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x += 1)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
