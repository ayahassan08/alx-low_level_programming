#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be checked
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int middle = length / 2;

	if (length % 2 == 1)
	{
		middle += 1;
	}
	while (middle < length)
	{
		_putchar(str[middle]);
		middle += 1;
	}
	_putchar('\n');
}
