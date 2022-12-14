#include <stdlib.h>

/**
 * create_array - creates an arrary and initialize it with a specific char
 * @size: size of the created array
 * @c: the specific char we are to initialize the array with
 * Return: pointer to characters
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
