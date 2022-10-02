#include "main.h"
#include <string.h>

/**
 * _strstr - checks if a substring(more than 1 char) exists in a string
 * @haystack: Target string in which we do the searching
 * @needle: substring that we are looking for in haystack
 * Return: pointer to the begining of the located string or
 * NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len_j;

	len_j = strlen(needle);
	if (*needle == 0)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; j < len_j;)
			{
				i++;
				if (haystack[i] == needle[j])
					j++;
				else
					break;
			}
			if (j == len_j)
			{
				haystack += (i - j + 1);
				return (haystack);
			}
		}
	}
	return (NULL);
}
