#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data(n) of the list
 *
 * @head: pointer to the list
 *
 * Return: the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
