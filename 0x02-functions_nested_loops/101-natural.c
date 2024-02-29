#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded), followed by a new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum, numbers;

	for (numbers = 0; numbers < 1024; numbers += 1)
	{
		if ((numbers % 3 == 0) || (numbers % 5 == 0))
		{
			sum += numbers;
		}
	}

	printf("%d\n", sum);

	return (0);
}
