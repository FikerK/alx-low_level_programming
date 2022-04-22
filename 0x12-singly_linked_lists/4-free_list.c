#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h);
	}
}
