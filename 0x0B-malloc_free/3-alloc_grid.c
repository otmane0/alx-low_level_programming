#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the allocated 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0, n = 0;

	if (!width || !height)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	for (i; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (!grid[i])
		{
			for (j; j < i; j++)
			{
				free(grid[j]);
			}
				free(grid);
				return (NULL);
		}


		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}

	return (grid);
}
