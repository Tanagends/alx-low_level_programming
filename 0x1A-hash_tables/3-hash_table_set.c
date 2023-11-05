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
	/*char *key_cpy = "", *value_cpy = "";*/

	if (!key || !ht)
		return (0);
	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);

	strcpy(element->key, (char *)key);
	strcpy(element->value, (char *)value);

	i = key_index((const unsigned char *)key, ht->size);

	element->next = ht->array[i];
	ht->array[i] = element;

	return (1);
}
