#include <stdio.h>
#include "main.h"
/**
 *print_square - print a square.
 *@size: one dimension of square.
 */
void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
		putchar('#');
		if (b != size - 1)
			putchar('\n');
		}
	}
}
