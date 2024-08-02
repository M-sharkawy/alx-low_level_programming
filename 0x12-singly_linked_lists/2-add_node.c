#include "lists.h"

/**
 * add_node - add nodes to the begining of the list
 *
 * @head: pointer for pointer of the 1st node
 * @str: pointer to astring
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node1;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node1 = malloc(sizeof(list_t));
	if (new_node1 == NULL)
		return (NULL);

	new_node1->str = strdup(str);
	new_node1->len = len;
	new_node1->next = (*head);
	(*head) = new_node1;

	return (*head);
}
