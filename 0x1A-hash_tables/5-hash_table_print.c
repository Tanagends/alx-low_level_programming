#include "hash_tables.h"

/**
 * hash_table_print - Printing the hashtable
 * @ht: Hashtable to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = NULL;
	unsigned long int i = 0, max_index = 0;
	hash_node_t *curr = NULL;

	if (ht == NULL)
		return;

	array = ht->array;
	max_index = max_index_array((hash_table_t *)ht);

	printf("{");

	while (i < (ht->size))
	{
		if (array[i] != NULL)
		{
			curr = array[i];

			while (curr != NULL)
			{
				printf("'%s': '%s'", curr->key, curr->value);

				if (i != max_index)
					printf(", ");

				curr = curr->next;
			}
		}

		i++;
	}
	printf("}\n");
}

/**
 * max_index_array - maximum valid index in array
 * @ht: Table to be traversed
 * Return: Maximu valid integer
 */

unsigned long int max_index_array(hash_table_t *ht)
{
	unsigned long int max = 0;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			max = i;
		}
		i++;
	}
	return (max);
}

/**
 * max_index_list - Maximum valid index in list
 * @node: Head of LinkedList
 * Return: maximum valid number
 */

unsigned long int max_index_list(hash_node_t *node)
{
	unsigned long int max = 0;
	unsigned long int i = 0;

	(void)i;
	(void)node;

	return (max);
}
