#include <stdio.h>
/**
 *_isdigit - checks for a digit.
 * @c: the parameter to be checked.
 * Return: 1 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c < '10')
		return (1);
	else
		return (0);
}
