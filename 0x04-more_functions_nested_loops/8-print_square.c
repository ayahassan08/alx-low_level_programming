#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < size; x += 1)
		{
			for (y = 0; y < size; y += 1)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
