#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: hash table size
 *
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_table_t *new_array[size];
	hash_table_t **new = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return NULL;

	new = malloc(sizeof(new_array));
	if (!new)
		return NULL;

	memset((*new), 0, sizeof(*new));
	
	new_table->size = size;
	new_table->array = new;

	return new_table;
}
