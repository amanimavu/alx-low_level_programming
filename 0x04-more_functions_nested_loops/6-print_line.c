#include "main.h"
/**
 * print_line - print a horizontal line
 * @n: length of the line
 * Description: only print line when length given is
 * greater than 1
 *
 * Return: no return value
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
