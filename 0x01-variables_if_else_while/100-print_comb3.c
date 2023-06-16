#include <stdio.h>
/**
 * main - prints all possible combinations of two digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	for (n = 0; n <= 9; n++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n >= x)
				continue
			putchar(n + '0');
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
