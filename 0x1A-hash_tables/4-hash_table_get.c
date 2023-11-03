#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value from a hash table
 * @ht: Hastable to be traversed to get the value
 * @key: Key to look for
 * Return: NULL if not found else the value
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **array = NULL;
	hash_node_t *curr;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	curr = array[index];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}

		curr = curr->next;
	}

	return (NULL);
}
