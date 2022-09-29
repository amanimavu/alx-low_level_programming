#include "main.h"

/**
 * _print_rev_recursion - prints dtring in reverse order
 * @s: string to be reversed
 * Return: no return value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
