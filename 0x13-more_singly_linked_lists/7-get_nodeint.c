#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the beginning
 * @index: index to node to be returned
 * Return: nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (0);
	}
	return (head);
}
