#include "main.h"

/**
 * times_table - displays the multiplication table
 * Description: for 2 nested for loop to create the table
 *
 * Return: Has no return value
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if(product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(product + '0');
			}
			if(j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
