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
			if (n > x)
				continue;
			putchar(n + '0');
			putchar(x + '0');
			if ((n != 8) || (x != 9))
				putchar(' ');
			for (p = 0; p <= 9; p++)
			{
				for (p = 0; p <= 9; x++)
				{
					if (n > x)
						continue;
			putchar(n + '0');
			putchar(x + '0');
			if ((n != 8) || (x != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	
	}
	putchar('\n');
	return (0);
}
