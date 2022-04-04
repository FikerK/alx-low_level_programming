#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: pointer to the duplicated string or NULL if memory insufficiency
 */

char *_strdup(char *str)
{
	char *ptr;
	long unsigned int i = 0;

	ptr = malloc(sizeof(str));
	while (i <= sizeof(str))
	{
		ptr[i] = str[i];
		i++;
	}
	if (str == NULL)
		return (0);
	return (ptr);
}
