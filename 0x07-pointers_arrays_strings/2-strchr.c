#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string from which a character is searched
 * @c: character being searched
 * Return: ponter to the first occurrence of character c
 * or null if c isn't found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			s += i;
			return (s);
		}
		i++;
	}
	return (NULL);
}
