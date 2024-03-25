#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: string to be checked
 * @src: string to be checked
 * @n: integer to be checked
 * Return: the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a += 1;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b += 1;
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}
