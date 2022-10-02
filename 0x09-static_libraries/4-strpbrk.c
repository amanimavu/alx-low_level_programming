#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string for any set of bytes given in accept
 * @s: string in which the searching is to be done
 * @accept: character that are to be matched in s
 * Return: pointer to the first occurence in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int len;

	len = strlen(s);
	for (i = 0; i < len;)
	{
		if (strchr(accept, s[i]))
		{
			s += i;
			return (s);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
