#include "hash_tables.h"

/**
 * hash_table_set - Sets a value on the table
 * @ht: Pointer to the hash table to be set
 * @key: String to be hashed to get the key
 * @value: Value to be sored in the hashtable array
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;
	char *newkey = strdup((char *)key);

	if (ht == NULL || key == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = newkey;
	new_node->value = strdup((char *)value);
	index = key_index((const unsigned char *)newkey, ht->size);

	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		if (strcmp((ht->array[index])->key, newkey) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = NULL;
			ht->array[index]->value = new_node->value;
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
