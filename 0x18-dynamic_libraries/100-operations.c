#include <stdio.h>

/**
 * add - arithmetic function to calculate the addition of 2 values
 * @a: a value
 * @b: another value
 * Return: the result of each operation
*/

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - arithmetic function to calculate the sub of 2 values
 * @a: a value
 * @b: another value
 * Return: the result of each operation
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - arithmetic function to calculate the mul of 2 values
 * @a: a value
 * @b: another value
 * Return: the result of each operation
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - arithmetic function to calculate the div of 2 values
 * @a: a value
 * @b: another value
 * Return: the result of each operation
*/

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}

	else
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
}

/**
 * mod - arithmetic function to calculate the mod of 2 values
 * @a: a value
 * @b: another value
 * Return: the result of each operation
*/

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}

	else
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
}
