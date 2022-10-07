#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory and initializes the memory
 * with 0
 * @nmemb: number of elements in the memory
 * @size: size of each element in the memory
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int space;

	space = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(space);
	if (!ptr)
	{
		return (NULL);
	}
	memset(ptr, 0, space);
	return (ptr);
}
