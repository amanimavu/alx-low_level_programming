#include "main.h"

/**
 * leet - encodes a string
 * @s: string parameter
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
			}
		}
		i++;
	}
	return (s);
}
