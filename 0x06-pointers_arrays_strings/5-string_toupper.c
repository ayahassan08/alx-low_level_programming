#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: string to be checked
 * Return: resulting string
*/

char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0';)
	{
		if (n[x] >= 97 && n[x] <= 122)
		{
			n[x] = n[x] - 32;
		}
		x += 1;
	}
	return (n);
}
