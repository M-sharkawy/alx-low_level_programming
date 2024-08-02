#include "lists.h"

/**
 * add_node_end - add node to the end of the list
 *
 * @head: pointer of the pointer of the 1st node
 * @str: string input in the list
 *
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_endnode;
	unsigned int len = 0;
	list_t *temp;

	while (str[len])
		len++;

	temp = *head;
	new_endnode = malloc(sizeof(list_t));
	if (new_endnode == NULL)
		return (NULL);

	new_endnode->str = strdup(str);
	new_endnode->len = len;
	new_endnode->next = NULL;

	if (*head == NULL)
	{
		*head = new_endnode;
		return (new_endnode);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new_endnode;

	return (new_endnode);
}
