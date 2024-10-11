#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: hashed table
 *
 * Return: print the key/value in the order or nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (!ht)
	{
		return;
	}

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		if (!ht->array[index])
		{
			continue;
		}
		else
		{
			ptr = ht->array[index];
			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				if (ptr->next != NULL)
					printf(", ");
				ptr = ptr->next;
			}
		}
	printf("}\n");
}
