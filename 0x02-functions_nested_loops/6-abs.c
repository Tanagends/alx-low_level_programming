#include <stdio.h>
/**
 * _abs - finds the absolute value of an int.
 * @c: The integer to compute the absolute value of.
 *
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
}
