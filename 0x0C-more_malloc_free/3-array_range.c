#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minmum element in the array
 * @max: maximum element in the array
 * Return: pointer to the memory(array)
 */

int *array_range(int min, int max)
{
	int size, i;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(ptr + (i - min)) = i;
	}
	return (ptr);
}
