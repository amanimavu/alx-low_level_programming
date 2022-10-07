#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size to be allocated
 * Return: address of allocated memory or if malloc
 * fail a program termination status of 98
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory != NULL)
	{
		return (memory);
	}
	else
	{
		exit(98);
	}
}
