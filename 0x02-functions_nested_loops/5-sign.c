#include <stdio.h>
/**
 * print_sign - prints sign of n.
 * @n: the number to be checked.
 * Return:  1 or -1 or 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
		putchar('1');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
		putchar('1');
	}
}
