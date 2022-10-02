#include "main.h"

/**
 * _memcpy - fills dest memory with constant byte from src memory
 * @dest: pointer to a dest array with type char
 * @src: poinetr to src array with type char
 * @n: the number of memory addresses to copy from src address
 * Return: pointer to memory area storing char type
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
