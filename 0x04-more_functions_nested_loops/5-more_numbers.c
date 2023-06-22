
#include <stdio.h>
/**
 * more_numbers - multiplies 0-14 by 10.
 */
void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a < 10)
				putchar(a + '0');
			else if (a > 9)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
			}
			putchar('\n');
		}
	}
}
