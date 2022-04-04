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

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i])
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		while (s2[j])
			j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (s1 == NULL && s2 == NULL)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	if (ptr == NULL)
		return (0);
	for (k = 0; k <= i + j; k++)
	{
		if (k < i && s1 != NULL)
			ptr[k] = s1[k];
		if (k >= i && s2 != NULL)
		{
			ptr[k] = s2[l];
			l++;
		}
	}
	return (ptr);
}
