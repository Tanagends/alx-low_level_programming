#include <string.h>
#include <stdlib.h>
/**
 * *free_grid - frees a two dimensional integer array.
 * @grid: two dimensional integer array.
 * @height: rows.
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
