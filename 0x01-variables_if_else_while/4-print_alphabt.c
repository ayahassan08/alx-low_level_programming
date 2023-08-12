#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;

	for (a = 97 ; a <= 122 ; a += 1)
	{
		if (a == 101 || a == 113)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
