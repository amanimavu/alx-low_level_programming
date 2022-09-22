#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: no return value
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = *(a + i);
		*(a + i) = *(a + ((n - 1) - i));
		*(a + ((n - 1) - i)) = temp;
	}
}
