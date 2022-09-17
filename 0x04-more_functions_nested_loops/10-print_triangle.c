#include "main.h"

/**
 * print_triangle - prints a right angle triangle with #
 * @size: height and width are of equal measurement = size
 *
 * Return: no return value
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= (size - i))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
