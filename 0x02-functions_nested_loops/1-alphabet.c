#include "main.h"

/**
 * print_alphabet - displays the alphabets from a-z
 * Description: Uses a for loop to go through letter
 * a to z
 *
 * Return: has no return value
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
