#include "main.h"
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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
