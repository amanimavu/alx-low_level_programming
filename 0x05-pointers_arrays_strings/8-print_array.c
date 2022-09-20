#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array followed by newline
 * @a: array whose elements are to be printed
 * @n: number of elements to be printed
 * Return: no return value
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d, ", *(a + i));
			else
				printf("%d\n", *(a + i));
		}
	else
	{
		for (i = 0; i >= n; i--)
		{
			if (i != n)
				printf("%d, ", *(a + i), i);
			else
				printf("%d\n", *(a + i), i);
		}
	}
}
