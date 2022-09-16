#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10 times
 * Description: a nested for loop is used to print 0-14
 * 10 times
 *
 * Return: No return value
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
