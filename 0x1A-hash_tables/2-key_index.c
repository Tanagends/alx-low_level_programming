#include "hash_tables.h"

/**
 * key_index - Returns the index from hashing the key
 * @key: String to be hashed
 * @size: Size of the hashtable array
 * Return: The found index from key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index = hash_djb2(key);

	if (size == 0)
		return (0);

	index %= size;

	return (index);
}
