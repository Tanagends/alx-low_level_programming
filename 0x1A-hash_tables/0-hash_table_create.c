#include "hash_tables.h"

/**
 * hash_table_create - Creates a hashtable function
 * @size: Size of table to be created
 * Return: A pointer to hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/*Initialize all elements of the table array*/
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
