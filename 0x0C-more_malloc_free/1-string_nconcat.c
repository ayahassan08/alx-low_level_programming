#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be checked
 * @s2: second string to be checked
 * @n: number of bytes to be checked
 * Return: If the function fails, it should return NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int length1, length2, a = 0, b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}
	x = malloc((length1 + n + 1) * sizeof(*x));

	if (x == NULL)
	{
		return (NULL);
	}
	while (a < length1)
	{
		x[a] = s1[a];
		a += 1;
	}
	while (b < n)
	{
		x[a + b] = s2[b];
		b += 1;
	}
	x[a + b] = '\0';

	return (x);
}
