#include <stdio.h>
/**
 * _puts_recursion - computes the facytorial of a number.
 * @n: the number.
 * Return: factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else 
		return (n * factorial(n - 1));
}
