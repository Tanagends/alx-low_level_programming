#include <stdio.h>
/**
 * times_table - prints times table.
 */
void times_table(void)
{
	int p;
	int q;
	int r;

	for (p = 0; p < 10; p++)
	{
		for (q = 0; q < 10; q++)
		{
			r = p * q;
			if (q == 0)
				putchar(r + '0');
			if (r < 10 && q != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(r + '0');
			}
			else if (r >= 10)
			{
				putchar(',');
				putchar(' ');
				putchar((r / 10) + '0');
				putchar((r % 10) + '0');
			}
		}
		putchar('\n');
	}
}

