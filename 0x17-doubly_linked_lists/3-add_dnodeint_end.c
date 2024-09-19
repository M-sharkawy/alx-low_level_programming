#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to the node
 * @n: integer value
 *
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp, *last;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
    temp->next = NULL;

    if (*head == NULL)
    {
        temp->prev = NULL;
        *head = temp;
        return (*head);
    }

    last = *head;

    while (last->next)
    {
        last = last->next;
    }

    temp->prev = last;
    last->next = temp;

    return (temp);
}
