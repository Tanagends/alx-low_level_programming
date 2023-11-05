#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: hash table size
 *
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new = malloc(sizeof(hash_node_t *) * size);
	if (!new)
		return (NULL);

	for (i = 0; i < size; i++)
		new[i] = NULL;

	new_table->size = size;
	new_table->array = new;

	return (new_table);
}
