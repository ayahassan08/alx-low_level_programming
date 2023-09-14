#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds a and b
 * @a: first integer to be checked
 * @b: second integer to be checked
 * Return: the sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: first integer to be checked
 * @b: second integer to be checked
 * Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first integer to be checked
 * @b: second integer to be checked
 * Return: the product of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first integer to be checked
 * @b: second integer to be checked
 * Return: the result of the division of a by b
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of the division of a by b
 * @a: first integer to be checked
 * @b: second integer to be checked
 * Return: the remainder of the division of a by b
*/

int op_mod(int a, int b)
{
	return (a % b);
}
