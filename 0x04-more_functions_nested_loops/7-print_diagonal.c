#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - print a line n long.
 *@n: length of line.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(92);
		_putchar(32);
	_putchar(10);
}
