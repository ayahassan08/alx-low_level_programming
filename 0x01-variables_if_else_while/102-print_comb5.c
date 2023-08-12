#include <stdio.h>
/**
 * main - prints all possible different combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, x;

	for (a = 0; a < 100; a += 1)
	{
		for (x = 0; x < 100; x += 1)
		{
			if (a < x)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (a != 98 || x != 99)
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
