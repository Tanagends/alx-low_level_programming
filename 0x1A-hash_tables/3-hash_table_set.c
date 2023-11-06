#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the string
 * @value: associated value
 *
 * Return: 1 (if success otherwise, 0)
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *element;

	if (!key || !ht)
		return (0);

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->key = strdup((char *)key);
	element->value = strdup((char *)value);

	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i])
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = NULL;
			ht->array[i]->value = element->value;
			return (1);
		}
	}
	element->next = ht->array[i];
	ht->array[i] = element;

	return (1);
}
