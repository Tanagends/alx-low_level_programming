#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to decimal.
 * @b: pointer to the binary.
 * Return: decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len = 0, i, sum = 0, mult, j;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			continue;
		else if (b[i] == '1')
		{
			mult = 1;
			for (j = 0; j < len - i - 1; j++)
				mult *= 2;
			sum += mult;
		}
		else
			return (0);
	}
	return (sum);
}
