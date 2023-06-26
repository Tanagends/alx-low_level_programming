#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string.
 * @s: the string pointer.
 */
void print_rev(char *s)
{
	int i;
	int k = strlen(s);

	for (i = k - 1; i > -1; i--)
		putchar(s[i]);
	putchar('\n');
}
