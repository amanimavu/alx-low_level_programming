#include <stdlib.h>

/**
 * alloc_grid - creates a 2-D array with entries initialized to 0
 * @width: columns of the 2-D array
 * @height: rows of the 2-D array
 * Return: pointer to pointers of integers
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
