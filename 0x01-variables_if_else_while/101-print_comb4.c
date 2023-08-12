#include <stdio.h>
/**
 * main - prints all possible different combinations
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, x, o;

	for (a = 48; a < 58; a += 1)
	{
		for (x = 49; x < 58; x += 1)
		{
			for (o = 50; o < 58; o += 1)
			{
				if (o > x || x > a)
				{
					putchar(a);
					putchar(x);
					putchar(o);
					if (a != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
