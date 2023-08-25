#include "main.h"

/**
 * leet - encodes a string into 1337
 * * @n: string to be checked
 * Return: resulting string
*/

char *leet(char *n)
{
	int a = 0;
	int b;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (n[a])
	{
		b = 0;
		while (letters[b] && n[a] != letters[b])
		{
			b += 1;
		}
		if (letters[b])
		{
			n[a] = numbers[b];
		}
		a += 1;
	}
	return (n);
}
