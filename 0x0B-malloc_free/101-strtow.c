#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _count - count number of characters in a string
 * @str: string to be checked
 * Return: Returns NULL if str == NULL or str == ""
*/

int _count(char *str)
{
	int word = 0;
	int in = 0;

	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (*str == ' ')
		{
			in = 0;
		}
		else if (in == 0)
		{
			in = 1;
			word += 1;
		}
		str += 1;
	}
	return (word);
}

/**
 * _copy - copies characters in a string
 * @str: string to be checked
 * Return: returns a pointer to an array of strings (words)
 * If your function fails, it should return NULL
*/

void *_copy(char *str)
{
	char *cop;
	int i = 0;
	int length = 0;

	while (str[length] && str[length] != ' ')
	{
		length += 1;
	}
	cop = malloc(sizeof(*cop) * (length + 1));
	if (cop == NULL)
	{
		return (NULL);
	}
	while (i < length)
	{
		cop[i] = str[i];
		i += 1;
	}
	cop[i] = '\0';
	return (cop);
}

/**
 * strtow - splits a string into words
 * @str: an array of strings
 * Return: Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
*/

char **strtow(char *str)
{
	char **words;
	int i = 0;
	int n;

	n = _count(str);
	if (n == 0)
		return (NULL);
	words = malloc(sizeof(**words) * (n + 1));
	if (words == NULL)
		return (NULL);
	while (*str && i < n)
	{
		if (*str != ' ')
		{
			words[i] = NULL;
			if (words[i] == NULL)
			{
				while (i >= 0)
				{
					free(words[i]);
					i -= 1;
				}
				free(words);
				return (NULL);
			}
			i += 1;
			while (*str && *str != ' ')
				str += 1;
		}
		else
			str += 1;
	}
	words[i] = NULL;
	return (words);
}
