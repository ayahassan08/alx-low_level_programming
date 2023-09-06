#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer to be checked
 * @av: string to be checked
 * Return: NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *args;
	int a, b, c, length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	length = 0;

	for (a = 0; a < ac; a += 1)
	{
		for (b = 0; av[a][b]; b += 1)
		{
			length += 1;
		}
		length += 1;
	}
	length += 1;

	args = malloc(sizeof(*args) * length);

	if (args == NULL)
	{
		return (NULL);
	}

	c = 0;

	for (a = 0; a < ac; a += 1)
	{
		for (b = 0; av[a][b]; b += 1)
		{
			args[c++] = av[a][b];
		}
		args[c++] = '\n';
	}
	return (args);
}
