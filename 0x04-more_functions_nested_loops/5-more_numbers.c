#include "main.h"
#include <stdio.h>
/**
* more_numbers - multiplies 0-14 by 10.
*/
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				putchar('1');
			putchar(b % 10 + '0');
		}
		putchar('\n');
	}
}
