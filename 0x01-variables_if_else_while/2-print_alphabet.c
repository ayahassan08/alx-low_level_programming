#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
