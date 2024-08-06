#include "lists.h"

/**
 * add_nodeint - add nodes to the begining of the list
 *
 * @head: pointer for pointer of the 1st node
 * @n: input integers
 *
 * Return: the address of the new node.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = (*head);
	*head = ptr;
	return (*head);
}
