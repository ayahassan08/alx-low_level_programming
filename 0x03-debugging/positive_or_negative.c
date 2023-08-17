#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - gives the correct output when given a case of 0
 * @i: the int to be checked
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
