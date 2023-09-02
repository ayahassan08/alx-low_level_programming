#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: integer to be checked
 * @argv: string to be checked
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x += 1;
	}
	return (0);
}
