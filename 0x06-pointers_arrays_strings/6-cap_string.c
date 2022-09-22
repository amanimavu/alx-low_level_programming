#include "main.h"

/**
 * is_separator - used to check if a character is a separator
 * @c: charater to be checked
 * Return: return an integer, 1 is c is a separator , 0 otherwise
 */

int is_separator(char c)
{
	int i;
	char separators[] = " \n\t,;.!?\"(){}";

	i = 0;
	while (separator[i] != '\0')
	{
		if (c == separator)
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes the string
 * @s: string parameter
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + 1) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + 1) -= 'a' - 'A';
			}
			else
			{
				if (is_separator(*(s + (i - 1))))
					*(s + i) -= 'a' - 'A';
			}
			i++;
		}
	}
	return (s);
}
