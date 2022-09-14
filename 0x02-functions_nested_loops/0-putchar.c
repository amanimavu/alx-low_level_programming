#include "main.h"
/**
  * print_text - displays single character of text
  * @string: is an array of character (string)
  * Description: loops through a string and extracts
  * characters, then displays them
  *
  * Return: Doesn't return any value
  */

void print_text(char string[])
{
	int i;

	i = 0;
	while (string[i] != '.')
	{
		_putchar(string[i]);
		++i;
	}
	_putchar('\n');
}
