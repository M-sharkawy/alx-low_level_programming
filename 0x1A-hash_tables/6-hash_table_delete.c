#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: hashed table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
