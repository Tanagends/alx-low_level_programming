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
				continue;
			for (p = 0; p <= 9; p++)
			{
				if (x >= p)
					continue;
				putchar(n + '0');
				putchar(x + '0');
				putchar(p + '0');
				if ((n != 7) || (x != 8) || (p != 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
