#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: integer to be checked
 * @argv: array to be checked
 * Return: returns 0 success, otherwise 1
*/

int main(int argc, char *argv[])
{
	int i, bytes;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (i = 0; i < bytes; i += 1)
	{
		printf("%02hhx", p[i]);

		if (i < bytes - 1)
		{
			printf(" ");
		}

		else
		{
			printf("\n");
		}
	}

	return (0);
}
