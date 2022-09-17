#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: length of the line
 * Description: Uses nested loop to achieve printing
 * the diagonal line
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i - 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

