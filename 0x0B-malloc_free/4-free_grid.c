#include "main.h"

/**
 * free_grid - allocates a 2D array of integers
 * @grid: width of the grid
 * @height: height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (!grid || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
