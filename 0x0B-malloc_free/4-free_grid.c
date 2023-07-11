#include <string.h>
#include <stdlib.h>
/**
 * *alloc_grid - two dimensional integer array.
 * @width: columns.
 * @height: rows.
 * Return: pointer to the copied string.
 */
void free_grid(int **grid, int height)
{
	int i, k;

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < height; k++)
			free(grid[k]);
		free(grid);
	}
}
