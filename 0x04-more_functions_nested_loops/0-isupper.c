#include <stdio.h>
/**
 * _isupper - checks for uppercase characters.
 *@c: the character to be checked.
 *Return: (1) Success.
 */
int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
