#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= size; x += 1)
		{
			for (y = x; y < size; y += 1)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y += 1)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
