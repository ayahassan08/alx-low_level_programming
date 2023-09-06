#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be checked
 * @s2: second string to be checked
 * Return: The function should return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int length1;
	unsigned int length2;
	unsigned int i;

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

	con = malloc(sizeof(*con) * (length1 + length2 + 1));

	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i += 1)
	{
		con[i] = s1[i];
	}
	for (i = 0; i < length2 + 1; i += 1)
	{
		con[length1 + i] = s2[i];
	}
	return (con);
}
