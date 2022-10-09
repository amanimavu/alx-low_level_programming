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
	arr = malloc(height * sizeof(int *));
	if (!arr)
	{

		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			j--;
			while (j > 0)
			{
				free(arr[i]);
				j--;
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
