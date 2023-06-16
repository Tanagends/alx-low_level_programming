#include <stdio.h>
/**
 * main - outputs capital alphabet letters in reverse.
 * Return: 0 (Success)
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; s--)
		putchar(s);
	putchar('\n');
	return (0);
}
