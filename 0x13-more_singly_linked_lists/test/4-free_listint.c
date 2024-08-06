#include "lists.h"

/**
 * free_listint - frees the list
 *
 * @head: pointer to the list
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->n);
		free(head);
		head = ptr;
	}
}
