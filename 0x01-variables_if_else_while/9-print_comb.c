#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
