#include <stdio.h>
#include "main.h"
/**
* print_square - prints a square, followed by a new line
* @size: size of the square
* Return: void
*/
void print_square(int size)
{
	int b;
	int c;

	for (b = 0; b < size; b++)
	{
		for (c = 0; c < size; c++)
		{
			putchar(35);
		}
		if (b != size - 1)
			putchar('\n');
	}
	putchar('\n');
}
