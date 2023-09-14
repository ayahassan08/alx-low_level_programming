#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: String to be checked
 * @f: Pointer to function
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	(*f)(name);
}
