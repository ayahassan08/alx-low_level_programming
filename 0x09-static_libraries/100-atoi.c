#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be checked
 * Return: integer
*/

int _atoi(char *s)
{
	int sign = 1;
	int con = 0;
	int x = 0;
	int a = 0;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
		{
			sign = sign * -1;
			x += 1;
		}
		else if (s[x] == '+')
		{
			x += 1;
		}
		else if (s[x] >= '0' && s[x] <= '9')
		{
			con = con * 10 + (s[x] - '0');
			x += 1;
			a = 1;
		}
		else if (a)
		{
			break;
		}
		else
		{
			x += 1;
		}
	}
	return (con * sign);
}
