#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to follow s1
 * @n: byte to copy from s2
 * Return: pointer to the newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1 = 0, n2 = 0, i = 0, j = 0, s = 0;
	char *p;

	if (s1 == NULL)
		n1 = 0;
	else
	{
		while (s1[n1])
			n1++;
	}
	if (s2 == NULL)
		n2 = 0;
	else
	{
		while (s2[n2])
			n2++;
		if (n < n2)
			n2 = n;
	}
	s = n1 + n2 + 1;
	p = malloc(sizeof(char) * s);
	if (p == NULL)
		return (0);
	for (i = 0; i < s; i++)
	{
		if (i < n1 && s1 != NULL)
			p[i] = s1[i];
		if (i >= n1 && s2 != NULL)
		{
			p[i] = s2[j];
			j++;
		}
	}
	p[s - 1] = '\0';
	return (p);
}
