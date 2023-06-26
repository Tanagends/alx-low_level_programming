#include <stdio.h>
#include <string.h>
/**
 * print_array - prints a string.
 * @n: the number of elements.
 * @a: array name.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
