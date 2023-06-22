#include <stdio.h>
/**
 * print_most_numbers - prints 0-9
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
			continue;
		putchar(c + '0');
	}
	putchar('\n');
}
