#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the linked list
 * @n: value to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newN;

	if (head == NULL)
		return (NULL);
	newN = malloc(sizeof(dlistint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->prev = NULL;
	*head = newN;
	if (newN->next != NULL)
		(newN->next)->prev = newN;
	return (newN);
}
