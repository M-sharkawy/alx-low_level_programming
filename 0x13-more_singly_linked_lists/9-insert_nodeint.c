#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node.
 *
 * @head: pointer of the node pointer.
 * @idx: index where the new node should be added.
 * @n: data inside the node.
 *
 * Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
