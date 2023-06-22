#include <stdio.h>
#include "main.h"
/**
* print_diagonal - draws a straight line in the terminal
* @n: number of times the character should be printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int b;
		int c;

		for (b = 0; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == b)
					putchar('\\');
				else if (c < b)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
