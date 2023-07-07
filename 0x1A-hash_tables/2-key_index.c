#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the input key to be indexed
 * @size: the size of the hash table
 *
 * Return: On success, index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
