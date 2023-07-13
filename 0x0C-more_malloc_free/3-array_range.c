#include <stdlib.h>
/**
 * array_range - creates an array of ints.
 * @min: minimum element.
 * @max: maximum element.
 * Return: pointer to allocated array.
 */
int *array_range(int min, int max)
{
	int *a;
	int i, k;

	if (min > max)
		return (NULL);
	k = max - min;
	a = malloc(sizeof(int) * (k + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < k + 1; i++)
		a[i] = min++;
	return (a);
}
