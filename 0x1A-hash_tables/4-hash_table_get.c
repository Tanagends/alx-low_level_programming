#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_get - Retrieves a value from a hash table
 * @ht: The hashtable
 * @key: The key
 * Return: NULL if not found else the value
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[idx];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);

		ptr = ptr->next;
	}

	return (NULL);
}
