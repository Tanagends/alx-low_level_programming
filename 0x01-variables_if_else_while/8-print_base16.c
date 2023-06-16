#include <stdio.h>
/**
 * main - writes all the hexadecimal digits.
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0x0; n >= 0xf; n++)
		putchar(n + '0x0');
	putchar('\n');
	return (0);
}
