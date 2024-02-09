#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be checked
 * Return: Always 0 (Success)
*/

void print_binary(unsigned long int n)
{
	int x, bin = 0;
	unsigned long int rep;

	for (x = 63; x >= 0; x--)
	{
		rep = n >> x;

		if (rep & 1)
		{
			putchar('1');
			bin++;
		}

		else if (bin)
		{
			putchar('0');
		}
	}
}
