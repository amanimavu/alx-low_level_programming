#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts a decimal to a binary number
 * @n: decimal number ot be converted
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int m = n;

	for (j = 0; m != 0; j++)
		m >>= 1;
	if (n == 0)
		printf("0");
	for (i = j - 1; i >= 0; i--)
	{
		if (n >> i & 1)
			printf("1");
		else
			printf("0");
	}
}
