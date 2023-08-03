#include "main.h"
/**
 * get_endianness - gets computer memory's endianness.
 * Return: 1 (Little endianness) or 0 (Big endianness).
 */
int get_endianness(void)
{
	unsigned long char *ptr;
	unsigned long int hex = 0x1234;

	ptr = (unsigned char *)&hex;
	if (*ptr > *(ptr++))
		return (1);
	else
		return (0);
}
