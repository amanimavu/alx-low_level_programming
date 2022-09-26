#include "main.h"
#include <string.h>

/**
 * _strspn - get length of a prefix substring
 * @s: string in which we look for the matching characters
 * @accept: string of characters to be matched
 * Return: number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int len;

	len = strlen(s);
	for (i = 0; i < len;)
	{
		if (strchr(accept, s[i]))
			i++;
		else
			break;
	}
	return (i);
}
