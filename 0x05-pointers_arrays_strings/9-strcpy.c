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
	while (*src != '\0')
	{
		*dest = *src;
		dest += 1;
		src += 1;
	}
	*dest = '\0';
	return (dest);
}
