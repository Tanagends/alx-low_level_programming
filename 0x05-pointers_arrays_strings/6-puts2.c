#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character.
 * @str:the string with the characters.
 */
void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i = i + 2)
		putchar(str[i]);
}
