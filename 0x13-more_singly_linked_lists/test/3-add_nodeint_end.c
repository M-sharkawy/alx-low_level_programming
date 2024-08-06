#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 *
 * @head: pointer of the pointer of the 1st node
 * @n: integer input in the list
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	ptr = (*head);
	if (ptr == NULL)
	return (NULL);

	while (ptr != NULL)
	ptr = ptr->next;

	ptr->next = temp;
	return (*head);
}
