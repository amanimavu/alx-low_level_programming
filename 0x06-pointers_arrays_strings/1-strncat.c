#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate a n bytes of string from source
 * to destination string
 * @dest: destination string to which characters are to be added to
 * @src: source string from which characters are to be extracted
 * @n: number of bytes to extract
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_src;
	int len_dest;

	len_src = strlen(src);
	len_dest = strlen(dest);
	for (i = 0; i <= (n - 1); i++)
	{
		*(dest + (i + len_dest)) = *(src + i);
	}

	return (dest);
}
