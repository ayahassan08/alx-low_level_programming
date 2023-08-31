#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first integer to be checked
 * @y: second integer to be checked
 * Return: the value of x raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
