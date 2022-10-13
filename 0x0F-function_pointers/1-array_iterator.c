#include <stdlib.h>

/**
 * array_iterator - prints the elements of the array
 * @array: array to be printed
 * @size: size of the array
 * @action: what to do to the array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
