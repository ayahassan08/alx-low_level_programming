#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: If n == 0, return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i += 1)
	{
		x += va_arg(args, int);
	}

	va_end(args);

	return (x);
}
