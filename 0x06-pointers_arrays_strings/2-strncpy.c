#include "main.h"
#include <string.h>

/**
 * _strncpy - copies n bytes of characters from src to dest string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 *
 * Return: modified destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
