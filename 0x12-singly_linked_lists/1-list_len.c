#include "lists.h"

/**
 * list_len - returns the number of the elements
 * @h: pointer to head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
