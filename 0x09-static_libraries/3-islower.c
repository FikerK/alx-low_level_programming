#include "main.h"

/**
 * _islower - does checks for lowercaseness
 *
 * @c: char in ascii
 * Return: 1 if it's lowercase and 0 if it's Uppercase
 */
int _islower(int c)
{
	int n = c;

	if (n >= 97 && n <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
