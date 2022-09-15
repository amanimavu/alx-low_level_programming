#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 * Description: uses nested for loop to print the alphabet from
 * a-z adding newline 10 times
 *
 * Return: Doesn't return anty value
 */

void print_alphabet_x10(void)
{
	int counter;
	char letter;

	for (counter = 0; counter < 10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
