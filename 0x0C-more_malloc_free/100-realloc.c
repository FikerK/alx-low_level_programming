#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previous allocation
 * @old_size: byte allocated for ptr
 * @new_size: byte of the new memory block
 * Return: newly allocated pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *pt = ptr;
	unsigned int i, j;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		return (0);
	}
	if (new_size > old_size)
		j = old_size;
	else
		j = new_size;
	for (i = 0; i < j; i++)
		p[i] = pt[i];
	free(ptr);
	return (p);
}
