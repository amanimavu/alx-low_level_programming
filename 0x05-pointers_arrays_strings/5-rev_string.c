#include "main.h"

/**
 * rev_string - mutating the string(reversing it)
 * @s: string to be mmutated(reversed)
 * Return: no return value
 */

void rev_string(char *s)
{
	int i;
	int temp;
	int j;
	int mid_point;
	int len;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;
	mid_point = (len / 2);
	for (j = len - 1; j >= mid_point; j--)
	{
		temp = *(s + j);
		*(s + j) = *(s + ((len - 1) - j));
		*(s + ((len - 1) - j)) = temp;
	}
}
