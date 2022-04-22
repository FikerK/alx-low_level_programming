#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
