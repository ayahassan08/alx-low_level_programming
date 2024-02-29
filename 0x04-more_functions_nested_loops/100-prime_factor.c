#include <stdio.h>
#include "main.h"

/**
 * _sqrt - prints the square root
 * @n: number to be printed
 * Return: the square root required
*/

double _sqrt(double n)
{
	float x, y;

	x = n / 2;
	y = 0;

	while (x != y)
	{
		y = x;
		x = (n / y + y) / 2;
	}

	return (x);
}

/**
 * prime_factor - prints the largest prime factor of numbers
 * @number: the number to be printed
 * Return: Always 0 (Success)
*/

void prime_factor(long int number)
{
	int pNum, largest;

	while (number % 2 == 0)
	{
		number = number / 2;
	}

	for (pNum = 3; pNum <= x(number); pNum += 2)
	{
		while (number % pNum == 0)
		{
			number = number / pNum;
			largest = pNum;
		}
	}

	if (number > 2)
	{
		largest = number;
	}

	printf("%d\n", largest);
}

/**
 * main - entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	prime_factor(612852475143);

	return (0);
}
