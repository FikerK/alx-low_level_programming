#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *nd;
	size_t i;

	nd = h;
	for (i = 0; nd; i++)
	{
		printf("[%d] %s\n", nd->len, nd->str);
		nd = nd->next;
	}
	return (i);
}
