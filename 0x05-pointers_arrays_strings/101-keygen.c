#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0 (Success)
*/

int main(void)
{
	int pass = 0;
	char letter;

	srand(time(NULL));

	while (pass < 2772)
	{
		letter = rand() % 128;
		pass = pass + letter;
		if (pass > 2722)
		{
			letter -= pass - 2772;
			pass = 2772;
		}
		putchar(letter);
	}
	return (0);
}
