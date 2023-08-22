#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be checked
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x += 1;
	}
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
