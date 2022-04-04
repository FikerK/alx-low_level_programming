#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialize it.
 * @size: size of the array
 * @c: initial character
 * Return: pointer to array or NULL if size = 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (0);
	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
