#include <stdio.h>
/**
 * _pow_recursion - computes exponentiation.
 * @x: the base number.
 * @y: exponent.
 * Return: result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(y - 1));
}
