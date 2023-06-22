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

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (k = 1; k < n; k++)
			{
				if (k == i)
					putchar('\\');
				else if (k < i)
					putchar(' ');
			}
		putchar('\n');
		}
	}
}
