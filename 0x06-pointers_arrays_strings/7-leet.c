#include "main.h"

/**
 * leet - encodes a string into 1337
 * * @n: string to be checked
 * Return: resulting string
*/

char *leet(char *n)
{
	char *p = n;

	while (*p)
	{
		char x = *p;

		if (x >= 'A' && x <= 'Z')
		{
			x = x + 32;
		}
		if (x == 'a')
		{
			x = '4';
		}
		else if (x == 'e')
		{
			x = '3';
		}
		else if (x == 'o')
		{
			x = '0';
		}
		else if (x == 't')
		{
			x = '7';
		}
		else if (x == 'l')
		{
			x = '1';
		}
		*p = x;
		p += 1;
	}
	return (n);
}
