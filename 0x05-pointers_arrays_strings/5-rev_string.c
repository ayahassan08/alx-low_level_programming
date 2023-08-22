#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be checked
 */

void rev_string(char *s)
{
	int a, b;
	char x = s[0];

	for (a = 0; s[a] != '\0'; a += 1)
	{
		;
	}
	for (b = 0; b < a; b += 1)
	{
		a--;
		x = s[b];
		s[b] = s[a];
		s[a] = x;
	}
}
