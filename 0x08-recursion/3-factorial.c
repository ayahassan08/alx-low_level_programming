#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be checked
 * Return: the factorial of a given number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
