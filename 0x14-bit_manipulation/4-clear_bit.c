#include "main.h"
/**
 * clear_bit - sets decimal's binary index value to 0.
 * @n: decimal pointer.
 * @index: position.
 * Return: 1 (Success).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;

	*n &= mask;
	return (1);
}
