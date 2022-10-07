#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates a memory in space and initializes the
 * memory with 0
 * @nmemb: number of elements to be held in the memory
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int space, i;

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
	memset(ptr, 0, nmemb);
	return (ptr);
}
