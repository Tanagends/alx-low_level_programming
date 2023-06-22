#include <stdio.h>
#include "main.h"
/**
 *print_line - print a line n long.
 *@n: length of line.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar(10);
}
