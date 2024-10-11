#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hashed table
 * @key: key
 * @value: key value
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *ptr;

	if (!ht || !value || !key || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			if (!ptr->value)
				return (0);
			return (1);
		}
		ptr = ptr->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);

	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
