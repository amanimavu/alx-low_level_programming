#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to an array with type char
 * @b: constant byte of type char to fill the memory
 * @n: the number of memory addresses to fill with constant byte
 * Return: pointer to memory area storing char type
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
