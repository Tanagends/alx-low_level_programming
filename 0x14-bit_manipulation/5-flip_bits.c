#include "main.h"
/**
 * flip_bits - counts bits flip from one decimal to the next..
 * @n: first decimal.
 * @m: second decimal.
 * Return: flip bits count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, mask, count = 0;

	if (m >= n)
		flip = m - n;
	else
		flip = n - m;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask)
	{
		if ((mask & flip) != 0)
			count++;
		mask >>= 1;
	}
	return (count);
}
