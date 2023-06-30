#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, j;

	a= 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (b < n && src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
