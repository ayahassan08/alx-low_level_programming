#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a += 1)
	{
		putchar(a);
	}
	for (a = 97; a < 103; a += 1)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
