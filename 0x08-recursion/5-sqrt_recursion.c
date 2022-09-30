#include "main.h"

/**
 * find_sqrt - finds the squareroot of a number
 * @num: number whose squareroot is to be evaluated
 * @iterator: number from 0 - nium/2
 * Return: squareroot of num
 */

int find_sqrt(int num, int iterator)
{
	if (num == (iterator *iterator))
		return (iterator);
	if (iterator > (num / 2))
		return (-1);
	return (find_sqrt(num, iterator + 1));
}

/**
 * _sqrt_recursion - conatins a function that finds squareroots
 * @n: number whose square root is to be evaluated
 * Return: squareroot of n, -1 if n doesn't have natural squareroot
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	return (find_sqrt(n, i = 0));
}
