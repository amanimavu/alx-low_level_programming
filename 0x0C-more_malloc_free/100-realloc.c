#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer previously allocated
 * @old_size: size previously allocated
 * @new_size: size to be allocated
 * Return: pointer to the allocated space with new_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	if (new_size < old_size)
	{
		new_ptr = malloc(new_size);
		memcpy(new_ptr, ptr, new_size);
		free(ptr);
	}
	return (new_ptr);
}
