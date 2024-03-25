#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be checked
 * @s2: string to be checked
 * Return: the resulting comparison
*/

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0';)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x += 1;
	}
	return (s1[x] - s2[x]);
}
