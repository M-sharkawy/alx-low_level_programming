#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of the list.
 *
 * @head: pointer of pointer of the list
 * @index: index of the deleted node
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;
	listint_t *current = *head;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (current)->next;
		free(current);
		return (1);
	}

	while (i < index - 1)
	{
		if (!current || !(current->next))
		{
			return (-1);
		}
			current = current->next;
			i++;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
