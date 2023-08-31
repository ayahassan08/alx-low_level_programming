#include "main.h"

int _natural(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to be checked
 * Return: the natural square root of a number
*/

int _sqrt_recursion(int n)
{
	return (_natural(n, 1));
}

/**
 * _natural - checks the natural square root
 * @n: integer to be checked
 * @x: integer to be checked
 * Return: the natural square root of a number
*/

int _natural(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (_natural(n, x + 1));
	}
}
