#include <stdio.h>
#include <string.h>
/**
 * _puts - prints a string.
 * @str: the string pointed at.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
		putchar('str[i]');
}	
