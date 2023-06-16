#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	for (n = 10; n <= 99; n++)
		putchar(n + '0' + ', ');
	putchar('\n');
	return (0);
}
