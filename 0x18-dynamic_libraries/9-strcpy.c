#include <stdio.h>
#include <string.h>
/**
 * _strcpy - prints a string.
 * @src: array to be copied.
 * @dest: array to be copied into.
 * Return: dest(file cpied into).
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
