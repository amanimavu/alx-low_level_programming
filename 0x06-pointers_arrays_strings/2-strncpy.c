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
	int len_src;
	int len_dest;

	len_src = strlen(src);
	len_dest = strlen(dest);
	n = n > len_src ? len_src : n - 1;
	for (i = 0; i <= n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
