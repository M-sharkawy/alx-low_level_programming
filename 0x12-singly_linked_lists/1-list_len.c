#include "lists.h"

/**
 * list_len - print string and length of string for each element of 'h'
 *
 * @h: pointer to first element of the list
 *
 * Return: the number of elements in a linked list_t list.
*/

size_t list_len(const list_t *h)
{
    size_t size = 0;

    while (h != '\0')
    {
        h = h->next;
        size++;
    }
    return (size);
}
