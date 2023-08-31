#include "main.h"

int _prime(int n, int x);

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: integer to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n, 2));
	}
}

/**
 * _prime - checks the prime number
 * @n: integer to be checked
 * @x: integer to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/

int _prime(int n, int x)
{
	if (x == n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, x + 1));
	}
}
