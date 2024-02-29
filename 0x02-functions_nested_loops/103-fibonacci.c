#include <stdio.h>
#include "main.h"

/**
 * main - a program that finds and prints the sum of
 * the even-valued terms, followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	float result;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	while (1)
	{
		sum = fibo1 + fibo2;

		if (sum > 4000000)
		{
			break;
		}

		if ((sum % 2) == 0)
		{
			result += sum;
		}

		fibo1 = fibo2;
		fibo2 = sum;
	}

	printf("%.0f\n", result);

	return (0);
}
