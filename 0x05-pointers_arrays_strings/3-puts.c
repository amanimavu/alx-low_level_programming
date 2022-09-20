#include "main.h"

/**
 * _puts - print a string followed by newline
 * @str: string array
 * Return: no return value
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
