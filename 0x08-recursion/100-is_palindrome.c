#include "main.h"

int _length(char *s);
int _palin(char *s, int first, int last);

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int len = _length(s);

	if (len == 0)
	{
		return (1);
	}
	else
	{
		return (_palin(s, 0, len - 1));
	}
}

/**
 * _length - check the length of the string
 * @s: string to be checked
 * Return: length of the string
*/

int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _length(s + 1));
	}
}

/**
 * _palin - checks if a string is palindrome of not
 * @s: string to be checked
 * @first: start of the string
 * @last: end of the string
 * Return: 1 if a string is a palindrome and 0 if not
*/

int _palin(char *s, int first, int last)
{
	if (first >= last)
	{
		return (1);
	}
	else if (s[first] != s[last])
	{
		return (0);
	}
	else
	{
		return (_palin(s, first + 1, last - 1));
	}
}
