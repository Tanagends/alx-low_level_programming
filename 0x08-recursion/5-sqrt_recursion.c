#include <stdio.h>
/**
 * _sqrt_recursion - computes sqrt of a number.
 * @n: the number.
 * Return: result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
/**
 * actual_sqrt - computes sqrt.
 * @n: number.
 * @i: iteration.
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1);
}
