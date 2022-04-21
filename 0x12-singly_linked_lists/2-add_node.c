#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of the list
 * @head: double pointer to head
 * @str: string to be added
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
