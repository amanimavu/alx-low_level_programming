#include "main.h"

/**
 * check_prime - checks if number > 2 is prime
 * @num: number to be checked
 * @iterator: every number between 2 and n-1
 * Return: 1 if num is prime , 0 otherwise
 */

int check_prime(int num, int iterator)
{
	if (num % iterator == 0)
		return (0);
	if (iterator == (num - 1))
		return (1);
	check_prime(num, iterator + 1);
}

/**
 * is_prime_number - chaecks if a number is prime or not
 * @n: number to be checked
 * Return: an integer, 1 if n is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int i;

	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	return (check_prime(n, i = 2));
}

