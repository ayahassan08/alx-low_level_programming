#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be checked
 * @src: string to be checked
 * Return: the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a += 1;
	}

	for (b = 0; src[b] != '\0'; b += 1)
	{
		dest[a] = src[b];
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}
