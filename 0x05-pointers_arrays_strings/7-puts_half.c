#include "main.h"

/**
 * puts_half - prints second half of the string
 * @str: string whose 2nd half is to be printed
 *
 * Return: no return value
 */

void puts_half(char *str)
{
	int i;
	int half;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (half = (i / 2); str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
