#include "hash_tables.h"

/**
 * hash_table_set - inserts or upadate an item in the hash table
 * @ht: pointer to the hash_table
 * @key: pointer to the string to be used as key
 * @value: data to be supplied to the item referenced by the key
 *
 * Description:
 * 1. Generate the index from the key supplied
 * 2. Access a slot of the hash table using the index generated
 * 3. Add the value to the hash table
 * 4. Incase of collisions add element to beginning of list
 *
 * Return: 1 if there is sucess, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *dup_value;
	hash_node_t *head_node;
	unsigned long int size;

	if (!ht)
		return (0);
	size = ht->size;
	head_node = malloc(sizeof(hash_node_t));
	if (!head_node)
		return (0);
	if (!key)
		return (0);

	index = key_index((unsigned char *)key, size);

	dup_value = strdup(value);
	head_node->key = strdup(key);
	head_node->value = dup_value;
	head_node->next = ht->array[index];
	ht->array[index] = head_node;

	return (1);
}
