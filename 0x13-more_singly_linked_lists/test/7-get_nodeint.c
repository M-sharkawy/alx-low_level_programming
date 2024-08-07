#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list.
 *
 * @index: the node's index
 * @head: pointer in the list
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
