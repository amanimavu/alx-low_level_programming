#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string from which a character is searched
 * @c: character being searched
 * Return: ponter to the first occurrence of character c
 * or null if c isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
