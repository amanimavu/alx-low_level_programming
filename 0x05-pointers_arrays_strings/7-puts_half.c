#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 * Return: no return value
 */

void puts_half(char *str)
{
	int i;
	int half_2;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	for (half_2 = i / 2; str[half_2] != '\0'; half_2++)
	{
		_putchar(str[half_2]);
	}
	_putchar('\n');

}
