#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 to n characters of s2
 * @s1: first string
 * @s2: second string parameter
 * @n: number of characters of s2 to be extracted
 *
 * Return: pointer to the newly created concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, space, i;
	char *joint;

	len_s1 = s1 == NULL ? 0 : strlen(s1);
	len_s2 = s2 == NULL ? 0 : strlen(s2);
	if (n >= len_s2)
		n = len_s2;

	space = sizeof(char) * (len_s1 + n + 1);
	joint = malloc(space);
	if (!joint)
		return (NULL);
	for (i = 0; i < space; i++)
	{
		if (i < len_s1)
			*(joint + i) = *(s1 + i);
		if (i >= len_s1 && i < space - 1)
			*(joint + i) = *(s2 + (i - len_s1));
		if (i == space - 1)
			*(joint + i) = '\0';
	}
	return (joint);
}
