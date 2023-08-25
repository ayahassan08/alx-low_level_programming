#include "main.h"

/**
 * leet - encodes a string into 1337
 * * @n: string to be checked
 * Return: resulting string
*/

char *leet(char *n)
{
	char x;
	int i = 0;

	while ((x = n[i]))
	{
		if (x == 'a' || x == 'A')
		{
			n[i] = '4';
		}
		else if (x == 'e' || x == 'E')
		{
			n[i] = '3';
		}
		else if (x == 'o' || x == 'O')
		{
			n[i] = '0';
		}
		else if (x == 't' || x == 'T')
		{
			n[i] = '7';
		}
		else if (x == 'l' || x == 'L')
		{
			n[i] = '1';
		}
		i += 1;
	}
	return (n);
}
