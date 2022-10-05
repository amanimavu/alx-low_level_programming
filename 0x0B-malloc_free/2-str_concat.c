#include <string.h>
#include <stdlib.h>

/**
 * str_concat - joins 2 strings, s2 to s1
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concated string
 */

char *str_concat(char *s1, char *s2)
{
	int len_1, len_2, i;
	char *joint;

	len_1 = (s1 == NULL) ? 0 : strlen(s1);
	len_2 = (s2 == NULL) ? 0 : strlen(s2) + 1;
	joint = malloc((len_1 + len_2) * sizeof(char));
	if (!joint)
	{
		return (NULL);
	}
	for (i = 0; i < len_1 + len_2; i++)
	{
		if (i < len_1)
		{
			*(joint + i) = *(s1 + i);
		}
		if (i >= len_1)
		{
			*(joint + i) = *(s2 + (i - len_1));
		}
	}
	return (joint);
}
