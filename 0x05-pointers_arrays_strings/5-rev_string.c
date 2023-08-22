#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be checked
 */

void rev_string(char *s)
{
	int a = 0;
	int b;
	int x = 0;

	while (s[a] != '\0')
	{
		a += 1;
	}
	for (b = 0; b < a; b += 1)
	{
		a--;

		while (s[x])
		{
			x = s[b];
			s[b] = s[a];
			s[a] = x;
		}
	}
}
