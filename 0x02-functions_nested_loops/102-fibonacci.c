#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	int result;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (result = 0; result < 50; result += 1)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (result == 49)
			printf('\n');

		else
			printf(', ');
	}

	return (0);
}
