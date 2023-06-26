#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string.
 * @str: the string pointed at.
 */
void _puts(char *str)
{
	int i;
	int k = strlen(str);

	for (i = 0; i < k; i++)
		putchar(str[i]);
	putchar('\n');

