#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be checked
*/

void print_number(int n)
{
	int sign = 1;
	int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / sign >= 10)
	{
		sign = sign * 10;
	}
	while (sign > 0)
	{
		num = n / sign;
		_putchar(num + '0');
		n = n % sign;
		sign /= 10;
	}
}
