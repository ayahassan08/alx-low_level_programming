#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;
	int A = 65;

	while (a <= 122)
	{
		putchar(a);
		a += 1;
	}
	while (A <= 90)
	{
		putchar(A);
		A += 1;
	}
	putchar('\n');
	return (0);
}
