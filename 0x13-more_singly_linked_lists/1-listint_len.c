#include"lists.h"

/**
 * listint_len - pthe number of each element of 'h'
 *
 * @h: pointer to first element of the list
 *
 * Return: the number of elements in a linked list_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		h = h->next;
		n_count++;
	}
	return (n_count);
}
