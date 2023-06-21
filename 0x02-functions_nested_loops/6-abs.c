#include <stdio.h>
/**
 * _abs - finds the absolute value of an int.
 * @int: - integer to be computed into its absolute value
 * Return: int absolute value.
 */
int _abs(int c)
{
	int result;

	if (c < 0)
		result = -c;
	else
		result = c;
	return (result);
