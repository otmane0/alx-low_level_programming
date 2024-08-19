#include "main.h"

/**
 * free_grid - allocates a 2D array of integers
 * @grid: width of the grid
 * @height: height of the grid
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0, j = 0, n = 0;

	if (!grid || height <= 0)
		return;

	for (i; i <= height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
