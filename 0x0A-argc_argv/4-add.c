#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: integer to be checked
 * @argv: string to be checked
 * Return: If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
*/

int main(int argc, char *argv[])
{
	char *s;
	int x = 1;
	int y;
	int add = 0;

	while (x < argc)
	{
		s = argv[x];
		x += 1;

		for (y = 0; s[y] != '\0'; y += 1)
		{
			if (!isdigit(s[y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(s);
	}
	printf("%d\n", add);
	return (0);
}
