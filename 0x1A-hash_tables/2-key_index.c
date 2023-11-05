#include "hash_tables.h"
/**
 * key_index -retrieves the index of the key
 * @key: the key to be mapped
 * @size: array size
 *
 * Return: key's index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash_code = hash_djb2(key);

	return (hash_code % size);
}
