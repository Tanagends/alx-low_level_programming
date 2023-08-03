#include "main.h"
/**
 * get_endianness - gets computer memory's endianness.
 * Return: 1 (Little endianness) or 0 (Big endianness).
 */
int get_endianness(void)
{
	unsigned char *ptr;
	unsigned long int hex = 0x1234;

	ptr = (unsigned char *)&hex;
	if (*ptr == 0x12)
		return (1);
	else
		return (0);
}
