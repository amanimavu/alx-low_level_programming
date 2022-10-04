#include <stdlib.h>
#include <string.h>

/**
 * _strdup - allocates memory storing a duplicate of str in it
 * @str: pointer to a string that we are to duplicate
 * Return: pointer to duplicate string or NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = malloc(sizeof(char) * len);
	if (!dup)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		*(dup + i) = *(str + i);
	}
	return (dup);
}
