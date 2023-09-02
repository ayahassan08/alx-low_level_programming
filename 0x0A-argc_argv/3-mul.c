#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: integer to be checked
 * @argv: string to be checked
 * Return: If the program does not receive two arguments,
 * your program should print Error,
 * followed by a new line, and return 1
*/

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d\n", z);
		return (0);
	}
}
