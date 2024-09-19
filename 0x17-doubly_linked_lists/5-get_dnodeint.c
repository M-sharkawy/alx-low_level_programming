#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 *
 * @head: pointer to the node
 * @index: ndex of the node, starting from 0
 *
 * Return: the node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}

		temp = temp->next;
		count += 1;
	}

	return (temp);
}
