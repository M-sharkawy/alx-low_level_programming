#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the node
 * @idx: index to insert node
 * @n: value of integer in the node
 *
 * Return: the address of the new node, or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (!h)
	return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp && count < idx - 1)
		temp = temp->next, count++;

	if (!temp || (temp->next == NULL && count < idx - 1))
		return (free(new_node), NULL);

	new_node->next = temp->next, new_node->prev = temp;
	if (temp->next)
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
