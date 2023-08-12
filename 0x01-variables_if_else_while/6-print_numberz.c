#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a += 1)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
