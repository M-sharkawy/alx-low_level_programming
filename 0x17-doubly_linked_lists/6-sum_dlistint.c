#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data(n) of a l-list.
 *
 * @head: pointer to the node
 *
 * Return: the sum or 0
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
