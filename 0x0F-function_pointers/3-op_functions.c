#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 2 integers
 * @a: first operand
 * @b: second operand
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 integers
 * @a: first operand
 * @b: second operand
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: first operand
 * @b: second operand
 *
 * Return: product of 2 integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 * @a: numerator
 * @b: denominator
 *
 * Return: division of 2 integers
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - returns remainder after division of 2 integers
 * @a: numerator
 * @b: denominator
 *
 * Return: modulo of 2 integers
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
