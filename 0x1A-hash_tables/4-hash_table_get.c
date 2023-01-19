#include "hash_tables.h"

/**
 * hash_table_get - function that enables access of values referenced by keys
 * @ht: hash table from which data is to be retrieved
 * @key: a string that references a value in the hash table
 *
 * Return: a string value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *node;

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	if (!ht->array[index])
		return (NULL);

	node = ht->array[index];
	return (node->value);
}
