#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: no return value
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	printf("loop starting");
	while (s[i] != '\0')
	{
		i++;
	}
	_putchar(i);
	for (j = i; j >= 0; i--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
