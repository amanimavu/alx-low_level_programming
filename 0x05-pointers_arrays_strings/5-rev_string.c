#include "main.h"

/**
 * rev_string - mutating the string(reversing it)
 * @s: string to be mmutated(reversed)
 * Return: no return value
 */

void rev_string(char *s)
{
	int i;
	int j;
	char mid_point;
	int len;

	while (i = 0; i != '\0'; i++)
	{
		i++;
	}
	len = i;
	mid_point = (len / 2) -1;
	for (j = len-1; i >= midpoint; j--)
	{
		*(s + j) = *(s + ((len - 1) - j));

	}
}
