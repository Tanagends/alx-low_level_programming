#include <stdio.h>
/**
 * _sqrt_recursion - computes sqrt of a number.
 * @n: the number.
 * Return: result.
 */
int _sqrt_recursion(int n)
{
	int k = n ** 0.5;

	if (n < 0 || k * k != n)
		return (-1);
	if (n >= 0 && k * k == n)
		return (k);
}
