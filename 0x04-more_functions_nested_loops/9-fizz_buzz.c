#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * But for multiples of 3 print Fizz instead of the number
 * and for the multiples of 5 print Buzz
 * numbers which are multiples of both 3 and 5 print FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x += 1)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (x % 3 != 0 && x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
