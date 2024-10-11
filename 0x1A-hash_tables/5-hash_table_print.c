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
	int first = 1;

	if (!ht)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		ptr = ht->array[index];
		while (ptr)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			first = 0;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
