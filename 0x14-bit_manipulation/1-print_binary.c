#include "main.h"
/**
 * print_binary - prints decimal's binary.
 * @n: decimal.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leading_zeros;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	leading_zeros = 1;

	while (mask > 0)
	{
		if ((n & mask) != 0)
			leading_zeros = 0;

		if (!leading_zeros)
		{
			if ((n & mask) != 0)
				putchar('1');
			else
				putchar('0');
		}

		mask >>= 1;
	}
}
