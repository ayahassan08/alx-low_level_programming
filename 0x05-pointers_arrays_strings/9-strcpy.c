#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: char to be copied from
 * @dest: char to be copied to
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int a;

	while (src[x] != '\0')
	{
		x += 1;
	}
	for (a = 0; a < x; a += 1)
	{
		dest[a] = src[a];
	}
	dest[x] = '\0';
	return (dest);
}
