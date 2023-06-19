#include <stdio.h>
/**
 * main - prints two pair numbers.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int x;
	int p;
	int q;

	for (n = 0; n <= 9; n++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (p = 0; p <= 9; p++)
			{
				for (q = 0; q <= 9; q++)
				{
					if ((n == 0) && (x == 0) && (p == 0) && (q == 0))
						continue;
					if ((n == 9) && (x == 9) && (p == 9) && (q == 9))
						continue;
					if (((n == p) && (x >= q))
						continue;
					if (n > p)
						continue;
					putchar(n + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(p + '0');
					putchar(q + '0');
					if ((p != 9) || (q != 9) || (n != 9) || (x != 8))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
