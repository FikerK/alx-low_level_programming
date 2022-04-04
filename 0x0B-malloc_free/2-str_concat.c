#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer pointing to memory containing s1 + s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0, k, l = 0;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	ptr = malloc(i + j + 1);

	if (ptr == NULL || (s1 == NULL && s2 == NULL))
		return (0);
	for (k = 0; k <= i + j; k++)
	{
		if (k < i)
			ptr[k] = s1[k];
		if (k >= i)
		{
			ptr[k] = s2[l];
			l++;
		}
	}
	return (ptr);
}
