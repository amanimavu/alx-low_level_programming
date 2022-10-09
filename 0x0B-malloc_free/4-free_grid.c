#include <stdlib.h>

/**
 * free_grid - frees the memory allocated for 2D array
 * @grid: 2D array (matrix)
 * @height: row represenation of matrix/grid
 * Return: has no return value
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
