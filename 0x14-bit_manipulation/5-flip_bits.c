#include "main.h"
/**
 * flip_bits - counts bits flip from one decimal to the next..
 * @n: first decimal.
 * @m: second decimal.
 * Return: flip bits count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, count = 0;

	flip = m ^ n;

	while (flip)
	{
		if ((flip & 1) != 0)
			count++;
		flip >>= 1;
	}
	return (count);
}
