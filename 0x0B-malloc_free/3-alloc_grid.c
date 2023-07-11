#include <string.h>
#include <stdlib.h>
/**
 * *alloc_grid - two dimensional integer array.
 * @width: columns.
 * @height: rows.
 * Return: pointer to the copied string.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int num, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * width * sizeof(int));
	if (!array)
		return (NULL);
	num = height * width;
	for (i = 0; i < num; i++)
		array[i] = 0;
	return (array);
}
