#include "main.h"
/**
 * set_bit - sets decimal's binary index value to 1.
 * @n: decimal pointer.
 * @index: position.
 * Return: 1 (Success).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	if (((*n) & mask) == 0)
		*(n + index) = 1;
	return (1);
}
