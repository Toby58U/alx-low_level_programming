#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	if (!h || (idx != 0 && !current))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		if (current)
			current->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	for (; idx > 1 && current; idx--)
		current = current->next;

	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
