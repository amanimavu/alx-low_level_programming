#include "main.h"

/**
 * string_toupper - transform lowercase to uppercase
 * @s: string to be transformed
 *
 * Return: Transformed string
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (s);
}
