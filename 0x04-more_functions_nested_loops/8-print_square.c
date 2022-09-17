#include "main.h"

/**
 * print_square - print a square of sides size x size
 * @size: length and height of square
 * Description: uses # to print the square using nested for loop
 *
 * Return: No return value
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
