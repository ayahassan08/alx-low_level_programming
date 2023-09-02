#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: integer to be checked
 * @argv: string to be checked
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
