#include "lists.h"

/**
 * dlistint_len - calculates the number of nodes in the linked list
 * @h: pointer to the head linked list
 *
 * Return: number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
