#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in a linked list.
 *
 * @h: pointer to the node
 *
 * Return: the number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t elm_number = 0;

	while (h)
	{
		elm_number += 1;
		h = h->next;
	}

	return (elm_number);
}
