#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints last half of a string.
 * @str: the string pointed at.
 */
void puts_half(char *str)
{
	int i;
	int k = strlen(str);

	if (k % 2 == 0)
		for (i = k / 2; i < k ; i++)
			putchar(str[i]);
	else
		for (i = (k + 1) / 2; i < k; i++)
			putchar(str[i]);
	putchar('\n');
}
