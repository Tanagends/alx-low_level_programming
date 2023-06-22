#include <stdio.h>
#include "main.h"
/**
 *print_diagonal - print a line n long.
 *@n: length of line.
 */
void print_diagonal(int n)
{
	int i;
	int k;

	for (i = 0; i < n; i++)
	{
		for (k = 1; k < n; k++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
}
