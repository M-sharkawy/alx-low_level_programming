#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 *
 * @head: pointer to the node
 * @index: index to insert node
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
		(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	while (temp && count < index)
		temp = temp->next;
		count++;

	if (!temp)
		return (-1);

	if (temp->prev)
	temp->prev->next = temp->next;

	if (temp->next)
	temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
