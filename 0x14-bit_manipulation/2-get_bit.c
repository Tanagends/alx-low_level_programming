#include "main.h"
#include <stddef.h>
/**
 * get_bit - gets decimal's binary index value.
 * @n: decimal.
 * @index: position.
 * return: index value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	size_t i;

	if (index >= sizeof(unsigned long int))
		return (-1);

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < index; i++)
		mask >>= 1;
	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
