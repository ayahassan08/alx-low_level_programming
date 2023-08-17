#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the char to be checked
 * Return: 1 in case c is a letter, lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
