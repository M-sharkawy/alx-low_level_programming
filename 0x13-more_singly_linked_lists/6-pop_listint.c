#include "lists.h"

/**
 * pop_listint - unction that deletes the head node of a listint_t linked list
 *
 * @head: pointer of pointer to the 1st node of the list
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	return (data);
}
