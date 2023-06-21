#include <stdio.h>
/**
 * jack_bauer - prints every minute of jack_bauer.
 * Return:
 */
void jack_bauer(void)
{
	int n;
	int x;
	int p;
	int q;

	for (n = 0; n <= 2; n++)
	{
		for (x = 0; x < 10; x++)
		{
			for (p = 0; p < 6; p++)
			{
				for (q = 0; q < 10; q++)
				{
					if ((n == 2) && (x > 3))
						continue;
					putchar(n + '0');
					putchar(x + '0');
					putchar(':');
					putchar(p + '0');
					putchar(q + '0');
					putchar('\n');
				}
			}
		}
	}

}

