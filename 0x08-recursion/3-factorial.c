#include "main.h"

/**
 * factorial - evaluate factorial of a number(n)
 * @n: integer whose factorial is evaluated
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}
