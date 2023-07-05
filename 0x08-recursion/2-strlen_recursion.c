#include <stdio.h>
/**
 * _strlen_recursion - calculates the length of a string.
 * @s: the string.
 */
int _strlen_recursion(char *s)
{
	int y = 0;

	if (*s == 0)
	{
		return (y);
	}
	y++;
	_puts_recursion(s + 1);
}
