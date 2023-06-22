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
	int y;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size; i++)
		putchar('#');
	putchar('\n');
	for (k = 0; k < size - 2; k++)
	{
		putchar('#');
		for (y = 0; y < size - 2; y++)
			putchar(' ');
		putchar('#');
		putchar('\n');
	}
	for (i = 0; i < 28; i++)
		putchar('#');
	putchar('\n');
}
