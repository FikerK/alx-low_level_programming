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
	unsigned long i = 0;

	ptr = malloc(sizeof(str));
	if (ptr == NULL)
		return (0);
	for (i = 0; i <= sizeof(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
