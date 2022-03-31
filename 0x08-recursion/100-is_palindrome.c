#include "main.h"

/**
 * get_length - get the length of the string
 * @s: string
 * @i: size
 * Return: size of string
 */

int get_length(char *s, int i)
{
	if (*(s + i) != '\0')
		get_length(s, i + 1);
	else
		return (i);
}

/**
 * _palindrome - check if string is palindrome
 * @s: string
 * @i: size of string
 * @j: 0 to size
 * Return: 1 if palindrome, 0 if not
 */

int _palindrome(char *s, int i, int j)
{
	if (i == j || i + 1 == j - 1)
		return (1);
	if (*(s + i) == *(s + j))
	{
		_palindrome(s, i - 1, j + 1);
	}
	else
		return (0);
}

/**
 * is_palindrome - palindrome or not
 * @s: string to be scrutinized
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;

	i = get_length(s, 0);
	return (_palindrome(s, i - 1, 0));
}
