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
	dlistint_t *temp1, *ptr, *temp2;

	if (*h == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	temp1 = *h;

	while (idx != 1)
	{
		temp1 = temp1->next;
		idx--;
	}

	temp2 = temp1->next;

	temp1->next = ptr;
	ptr->prev = temp1;
	temp2->prev = ptr;
	ptr->next = temp2;

	return (*h);
}
