#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: the array size
 *
 * Return: a pointer to the newly created hash table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int index;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->size = size;
	newtable->array = malloc(sizeof(hash_node_t *) * size);

	if (newtable->array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		newtable->array[index] = NULL;
	}

	return (newtable);
}
