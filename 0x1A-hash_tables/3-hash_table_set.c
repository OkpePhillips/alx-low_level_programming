#include "hash_tables.h"
/**
 * hash_table_set - adds element to the table
 * @key: the key of the table
 * @value: the value of the key
 * @ht: the hast table structure
 *
 * Return: 1 on success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	char *new_key;
	hash_node_t *new_node = NULL;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_key = strdup(key);
	new_value = strdup(value);
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
