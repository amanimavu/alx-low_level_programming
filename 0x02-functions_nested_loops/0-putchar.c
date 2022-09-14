#include "main.h"
/**
  * main - entry point of the program
  * Dscription: invoking print_text function
  *
  *Return: always returns a zero
  */

int main(void)
{
	char word[50] = "_putchar.";

	print_text(word);
	return (0);
}


/**
  * print_text - prints text
  * Description: loops though a string and uses
  * the _putchar user defines method to print character
  * @string: character array parameter
  *
  * Return: always returns a 0
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
