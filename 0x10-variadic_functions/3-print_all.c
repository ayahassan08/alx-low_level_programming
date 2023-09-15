#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Always 0 (Success)
*/

void print_all(const char * const format, ...)
{
	va_list arg;
	char *x;
	int i = 0;

	va_start(arg, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				x = va_arg(arg, char*);
				if (x == NULL)
				{
					x = "(nill)";
					break;
				}
				printf("%s", x);
				break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[i + 1] != '\0')
		{
			printf(", ");
		}
		i += 1;
	}
	printf("\n");

	va_end(arg);
}
