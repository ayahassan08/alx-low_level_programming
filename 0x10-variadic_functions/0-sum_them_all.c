#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: If n == 0, return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int x = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	for (unsigned int i = 0; i < n; i += 1)
	{
		x += va_arg(arg, int);
	}

	va_end(arg);

	return (x);
}
