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
		putchar('+');
		putchar('1');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('0');
		putchar('\n');
		return (0);
	}
	else
	{
		putchar('-');
		putchar('1');
		putchar('\n');
		return (-1);
	}
}
