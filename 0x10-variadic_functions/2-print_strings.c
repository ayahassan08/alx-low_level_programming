#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Always 0 (Success)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);

	for (i = 0; i < n; i += 1)
	{
		s = va_arg(arg, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", s);
		}

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(arg);
}
