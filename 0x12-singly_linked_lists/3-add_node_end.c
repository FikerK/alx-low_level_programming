#include "lists.h"
#include <string.h>

/**
 * list_t - adds a new node at the end of the ilst
 * @head: double pointer to head
 * @str:  string to be added
 * Return: pointer to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *newb;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head)
	{
		newb = *head;
		while (newb->next)
		{
			newb = newb->next;
			i++;
		}
		newb->next = new;
	}
	else
		*head = new;
	new->next = NULL;
	new->str = strdup(str);
	i = 0;
	while (str[i])
		i++;
	new->len = i;
	return(new);
}
