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
	int i;

	for (i = 31; i >= 0; i--)
	{
		if ((1u << i) <= n || i == 0)
		{
			if (n & (1 << i))
				printf("1");
			else
				printf("0");
		}
	}
}
