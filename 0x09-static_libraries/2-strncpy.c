#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be checked
 * @src: string to be checked
 * @n: integer to be checked
 * Return: the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x += 1;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x += 1;
	}
	return (dest);
}
