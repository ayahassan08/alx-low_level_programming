#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a += 1)
	{
		printf("%i", a);
	}
	putchar('\n');
	return (0);
}
