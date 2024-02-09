#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int pow = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (int x = 0; b[x] != '\0'; x += 1)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

		if (b[x] == '1')
		{
			res += pow;
		}

		pow <<= 1;
	}

	return (res);
}
