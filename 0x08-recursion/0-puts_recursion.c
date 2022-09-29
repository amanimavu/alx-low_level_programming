#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to be printed
 * Return: no return value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	return (_puts_recursion(s));
}
