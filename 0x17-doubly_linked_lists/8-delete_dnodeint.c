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
	unsigned int i = 0;
	dlistint_t *actual = *head, *node, *node2;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (actual->next == NULL)
		{
			free(actual);
			*head = NULL;
			return (1);
		}
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(actual);
			return (1);
		}
	}
	while (actual)
	{
		if (i  == index - 1)
		{
			node = actual->next;
			actual->next = node->next;
			if (actual->next != NULL)
			{
				node2 = node->next;
				node2->prev = actual;
			}
			free(node);
			return (1);
		}
		actual = actual->next;
		i++;
	}
	return (-1);
}
