#include <stdio.h>
/**
 * _sqrt_recursion - computes sqrt of a number.
 * @n: the number.
 * Return: result.
 */
int _sqrt_recursion(int n)
{
	float k = n ** 0.5;
	int b = (int) k;

	if (n < 0 || b * b != n)
		return (-1);
	if (n >= 0 && b * b == n)
		return (k);
}
