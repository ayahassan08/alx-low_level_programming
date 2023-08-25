#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @n: string to be checked
 * Return: resulting string
*/

char *cap_string(char *n)
{
	int x = 0;

	while (n[x])
	{
		while (!(n[x] >= 97 && n[x] <= 122))
		{
			x += 1;
		}
		if (x == 0 || n[x - 1] == ' ' || n[x - 1] == '\t' || n[x - 1] == '\n' ||
		n[x - 1] == ',' || n[x - 1] == ';' || n[x - 1] == '.' || n[x - 1] == '!' ||
		n[x - 1] == '?' || n[x - 1] == '"' || n[x - 1] == '(' || n[x - 1] == ')' ||
		n[x - 1] == '{' || n[x - 1] == '}')
		{
			n[x] = n[x] - 32;
		}
		x += 1;
	}
	return (n);
}
