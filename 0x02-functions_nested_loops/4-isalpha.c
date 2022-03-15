#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: character to be checked
 * Return: 1 if it's character, else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
