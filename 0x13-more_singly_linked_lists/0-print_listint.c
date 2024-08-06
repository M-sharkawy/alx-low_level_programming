#include "lists.h"

/**
 * print_listint - print string and length of string for each element of 'h'
 *
 * @h: pointer to first element of the list
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("0\n");
	}
	else
	{
		while (h != NULL)
		{
			printf("%u\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
