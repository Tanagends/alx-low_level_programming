#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: the string.
 */
void _print_rev_recursion(char *s)
{
	size_t i = strlen(s);
	char *p == s;

	if (p == s)
	{
		putchar('\0');
		return;
	}
	p = p + i - 1;
	putchar(*p);
	_puts_recursion(p - 1);
}
