#include <stdio.h>
#include "main.h"
/**
* main -  prints the sum of all the multiples of 3 or 5 below 1024
* Return: Always 0
*/
int main(void)
{
	int c;
	int d;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
			d += c;
	}
	printf("%d\n", d);
	return (0);
}
