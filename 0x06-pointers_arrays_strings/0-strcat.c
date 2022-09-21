#include "main.h"
#include "string.h"

/**
 * _strcat - concatanate source string to destinataion string
 * @dest: string whose characters are to be added
 * @src: string whose characters are added to dest string
 *
 * Return: the destinantion string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len_src;
	int len_dest;

	len_src = strlen(src);
	len_dest = strlen(dest);
	for (i = 0; i <= (len_src + len_dest); i++)
	{
		*(dest + (i + len_dest)) = *(src + i);
	}
	return (dest);
}
