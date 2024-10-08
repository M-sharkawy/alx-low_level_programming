#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *
 * @h: pointer to the node
 *
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
