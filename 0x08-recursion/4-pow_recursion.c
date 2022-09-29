#include "main.h"

/**
 * _pow_recursion - evaluate the power of a number x(x ^ y)
 * @x: the base of the power
 * @y: the index of the power
 * Return: power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
