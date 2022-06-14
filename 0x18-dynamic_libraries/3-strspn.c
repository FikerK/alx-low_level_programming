#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: string to be matched
 * Return: length, int.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, n = 0, m = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		m = n;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
				n++;
			j++;
		}
		if (m == n)
			break;
		i++;
	}
	return (n);
}
