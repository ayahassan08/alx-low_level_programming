#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be checked
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	duplicate = malloc(sizeof(*str) * length);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i += 1)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
