#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string
 * @dest: destination for the string copy
 * @src: source of the string copy
 * Return: no return value
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
