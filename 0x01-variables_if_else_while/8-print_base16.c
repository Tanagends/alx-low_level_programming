#include <stdio.h>
/**
 * main - writes all the hexadecimal digits.
 * Return: 0(Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n >= 9; n++)
		putchar(n + '0');
	for (c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
