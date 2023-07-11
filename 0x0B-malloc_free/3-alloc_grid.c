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
	int k, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (!array)
		return (NULL);
	for (i = 0; i < ; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (!array[i])
		{	for (k = 0; k < i; k++)
				free(array[k]);
			free(array);
		}
		for (k = 0; k < width; k++)
			array[i][k] = 0;
	}
	return (array);
}
