#include "lists.h"

/**
 * free_listint2 - frees the list and put head to null
 *
 * @head: pointer of the a pointer to the list
*/

void free_listint2(listint_t **head)
{
    listint_t *ptr;

    if (head == NULL)
		return;

    while(*head)
    {
        ptr = (*head)->next;
        free(*head);
        *head = ptr;
    }
    *head = NULL;
}
