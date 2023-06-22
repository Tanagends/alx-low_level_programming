#include <stdio.h>
/**
 * print_numbers - prints 0-9
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
		putchar(c + '0');
	putchar('\n');
}
