#include <stdio.h>
/**
 * main - prints all possible combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, x;

	for (a = 48; a <= 56; a += 1)
	{
		for (x = 49; x <= 57; x += 1)
		{
			if (x > a)
			{
				putchar(a);
				putchar(x);
				if (a != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
