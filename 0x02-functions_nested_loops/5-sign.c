#include "main.h"
/**
 * print_sign - check whether for the sign of an integer
 * @n: int type parameter that is input
 * Description: uses if...else condition to check whether an integer
 * is +ve, -ve or neutral
 *
 * Return: 1 if +ve, 0 if 0, -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
