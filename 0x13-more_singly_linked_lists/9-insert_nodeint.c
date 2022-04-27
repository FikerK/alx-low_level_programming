#include "lists"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: double pointer to the beginning
 * @idx: index of the node to insert
 * @n: value for new node
 * Return: pointer to the indexed node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	if (head == NULL)
		return (0);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (0);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
