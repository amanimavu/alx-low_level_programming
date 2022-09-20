#include "main.h"

/**
 * puts2 - prints every other character starting from first character
 * @str: string to be printed
 * Return: no return value
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
