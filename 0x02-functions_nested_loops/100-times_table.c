#include "main.h"

/**
 * print_times_table - prints the multiplication tables of n
 * @n: max row and column
 * Return: no return value
 */

void print_times_table(int n);
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + '\0');
			}
			if (i * j > 9 && (i * j) < 100)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '\0');
				_putchar(((i * j) % 10) + '\0');
			}
			if (i * j > 99)
			{
				_putchar((((i * j) / 10) / 10) + '\0');
				_putchar((((i * j) / 10) % 10) + '\0');
				_putchar(((i * j) % 10) + '\0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
