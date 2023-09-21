#include "lists.h"

void tortoise(void) __attribute__ ((constructor));

/**
 * tortoise - prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n before the main function is executed
 * Return: Always 0 (Success)
*/

void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
