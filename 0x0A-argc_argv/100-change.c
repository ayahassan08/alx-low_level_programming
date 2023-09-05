#include "main.h"
#include <stdlib.h>

int change(int x, int value, int *coin);

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * change - prints the minimum number of coins
 * @x: amount of money
 * @value: value of coins
 * @coin: pointer to number of coins
 * Return: the amount of money
*/

int change(int x, int value, int *coin);
int main(int argc, char *argv[])
{
	int cents, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin = 0;
	cents = change(cents, 25, &coin);
	cents = change(cents, 10, &coin);
	cents = change(cents, 5, &coin);
	cents = change(cents, 2, &coin);
	cents = change(cents, 1, &coin);
	printf("%d\n", coin);
	return (0);
}
