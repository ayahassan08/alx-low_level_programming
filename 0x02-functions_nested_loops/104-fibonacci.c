#include <stdio.h>
#include "main.h"

/**
 * nLength - prints the length of a string
 * @number: number to be printed
 * Return: a number
*/

int nLength(int number)
{
	int length = 0;

	if (!number)
	{
		return (1);
	}

	while (number)
	{
		number = number / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers,
 *  starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
*/

int main(void)
{
	int result, numbers;
	unsigned long fibo1 = 1, fibo2 = 2, sum,
	max = 100000000, nacci1 = 0, nacci2 = 0, multi = 0;

	for (result = 1; result <= 98; result += 1)
	{
		if (nacci1 > 0)
		{
			printf("%lu", nacci1);
		}

		numbers = nLength(max) - 1 - nLength(fibo1);

		while (nacci1 > 0 && numbers > 0)
		{
			printf("%d", 0);
			numbers -= 1;
		}

		printf("%lu", fibo1);

		sum = (fibo1 + fibo2) % max;
		multi = nacci1 + nacci2 + (fibo1 + fibo2) / max;
		fibo1 = fibo2;
		fibo2 = sum;
		nacci1 = nacci2;
		nacci2 = multi;

		if (result != 98)
			printf(", ");

		else
			printf("\n");
	}

	return (0);
}
