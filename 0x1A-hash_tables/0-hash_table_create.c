#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table by assigning memory
 * @size: the size of the hash table
 *
 * Return: On success, pointer to the table; else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	new_table->size = size;

	return (new_table);
}
