#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning of a D-linked list.
 *
 * @head: pointer to the node
 * @n: integer value
 *
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}

	*head = temp;

	return (*head);
}
