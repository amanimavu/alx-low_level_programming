#include <stdio.h>

/**
 * print_to_98 - prints a list of numbers fromn to 98
 * @n: int type parameter that may be larger than 98,
 * smaller that 98, positive or negative
 *
 * Description: uses if...else condition to determine if n > 98
 * of n < 98. A for loop is used to iterate through the numbera
 * and a printf displays the number
 * Return: Has no return value
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
		}
	}
	printf("98\n");
}

