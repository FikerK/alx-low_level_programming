#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: pointer to the duplicated string or NULL if memory insufficiency
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned long i = 0, j = 0;

	while (str[j])
		j++;
	ptr = malloc(j + 1);
	if (str == NULL)
		return (0);
	if (ptr == NULL)
		return (0);
	for (i = 0; i <= j; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
