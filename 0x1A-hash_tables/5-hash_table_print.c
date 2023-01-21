#include "hash_tables.h"

/**
 * hash_table_print - print value from the hash table if not NULL
 * @ht: hash table to be printed
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, size, i;
	hash_node_t *node;

	size = ht->size;
	printf("{");
	for (index = 0; index < size; index++)
	{
		if (ht->array[index])
		{
			node = ht->array[index];
			printf("'%s': ", node->key);
			printf("'%s'", node->value);
			for (i = index + 1; i < size; i++)
			{
				if (ht->array[i])
				{
					printf(",");
					break;
				}
			}
		}
	}
	printf("}\n");
}