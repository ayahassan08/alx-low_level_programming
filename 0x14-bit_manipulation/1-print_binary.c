#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be checked
 * Return: Always 0 (Success)
*/

void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8, num = 0;

	while (bin)
	{
		if (n & 1L << --bin)
		{
			_putchar('1');
			num += 1;
		}

		else if (num)
		{
			_putchar('0');
		}
	}

	if (!num)
	{
		_putchar('0');
	}
}
