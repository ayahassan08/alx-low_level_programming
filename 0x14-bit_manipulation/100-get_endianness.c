#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: Always 0 (Success)
*/

int get_endianness(void)
{
	unsigned long int endia = 1;

	return (*(char *)&endia);
}
