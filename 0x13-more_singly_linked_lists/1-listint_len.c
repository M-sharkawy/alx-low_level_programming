#include"lists.h"

/**
 * listint_len - print string and length of string for each element of 'h'
 *
 * @h: pointer to first element of the list
 *
 * Return: the number of elements in a linked list_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t n_count;

	while (h != NULL)
	{
		h = h->next;
		n_count++;
	}
	return (n_count);
}
