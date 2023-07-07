#include "hash_tables.h"

/**
 * hash_table_print - prints the key-value pairs in a table
 * @ht: the hash table structure
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_key;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	first_key = 1;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first_key)
			{
				first_key = 0;
			}
			else
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
