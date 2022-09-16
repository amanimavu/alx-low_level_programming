#include "main.h"

/**
 * print_numbers - prints the numbers form 0-9
 * Description: Uses a for loop to print the numbers from
 * 0-9
 * Return: No return value
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i);
	_putchar('\n');
}
