#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: scanned string
 * @accept: string to match
 * Return: pointer to the byte in s that matched, NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, n = 0, a = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				n = i;
				a = 1;
				break;
			}
			j++;
		}
		if (a == 1)
			break;
		i++;
	}
	return (s + n);
}
