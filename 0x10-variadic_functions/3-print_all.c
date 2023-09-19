#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Always 0 (Success)
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list arg;

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i += 1;
					continue;
			}
			separator = ", ";
			i += 1;
		}
	}

	printf("\n");
	va_end(arg);
}
