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
	hash_node_t *newnode, *currentnode;

	if (!ht || !value || !key || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	currentnode = ht->array[index];

	while (currentnode)
	{
		if (strcmp(currentnode->key, key) == 0)
		{
			free(currentnode->value);
			currentnode->value = strdup(value);
			if (!currentnode->value)
				return (0);
			return (1);
		}
		currentnode = currentnode->next;
	}

	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);

	newnode->key = strdup(key);
	if (!newnode->key)
		free(newnode);
		return (0);

	newnode->value = strdup(value);
	if (newnode->value)
		free(newnode->key);
		free(newnode);
		return (0);

	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
