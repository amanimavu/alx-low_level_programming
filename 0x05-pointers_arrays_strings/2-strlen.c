#include <stdio.h>
/**
 * _strlen - find the length of a string
 * @s: string whose length is to evaluated
 *
 * Return: a integer
 */

int _strlen(char *s)
{
	int i;

	i = 1;
	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}
