#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be checked
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x += 1;
	}
	_putchar('\n');
}
