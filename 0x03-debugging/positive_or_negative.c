#include <stdio.h>

/**
 * positive_or_negative - checks whether an integer is +ve or -ve or 0
 * @n: int type parameter
 *
 * Description: Uses if...else to check if n is greater than or less than 0
 * Return: no return value
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
