#include <stdio.h>
/**
 * _sqrt_recursion - computes sqrt of a number.
 * @n: the number.
 * Return: result.
 */

int b = 0;

int _sqrt_recursion(int n)
{
	b++;

	if (n < 0 || b * b > n)
		return (-1);
	if (b * b == n)
		return (b);
	return(n);

}
