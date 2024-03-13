#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: a number to be flipped
 * @m: another number to be flipped
 * Return: the number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int num = 0;

	while (result)
	{
		if (result & 1ul)
		{
			num += 1;
		}

		result = result >> 1;
	}

	return (num);
}
