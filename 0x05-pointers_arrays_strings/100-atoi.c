#include <stdlib.h>
/**
 * _atoi - converts a string into an integer.
 * @s: the string to be converted.
 * Return: the int converted from string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
			return (sign == -1 ? INT_MIN : INT_MAX);
		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}
