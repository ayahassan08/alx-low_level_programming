#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string to be checked
 * Return: the resulting string
*/

char *rot13(char *n)
{
	int i = 0;
	char x;

	while ((x = n[i]))
	{
		if (x >= 'a' && x <= 'z')
		{
			n[i] = ((x - 'a') + 13) % 26 + 'a';
		}
		else if (x >= 'A' && x <= 'Z')
		{
			n[i] = ((x - 'A') + 13) % 26 + 'A';
		}
		i += 1;
	}
	return (n);
}
