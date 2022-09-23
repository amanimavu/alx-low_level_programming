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
	char char_and_code[] = "a1A1e3E3o0O0t7T7l1L1";

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; char_and_code[j] != '\0'; j++)
		{
			if (char_and_code[j] == *(s + i))
			{
				*(s +i) = char_and_code[j + 1];
				break;
			}
			else
			{
				continue;
			}
		}
		i++;
	}
	return (s);
}
