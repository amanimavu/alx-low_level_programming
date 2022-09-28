#include "main.h"

/**
 * print_diagsums - finds the sums of diagonal
 * @a: 2-D array(matrix like)
 * @size: one dimensio of the square matrix
 * Return: no return value
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum, actual_size;

	if (size == 1)
	{
		printf("%d, %d\n", a[0], a[0]);
	}

	sum = 0;
	actual_size = size * size;
	for (i = 0; i < actual_size;)
	{
		sum += a[i];
		i += (size + 1);
	}
	printf("%d, ", sum);
	sum = 0;
	for (j = (size - 1); j <= actual_size - size;)
	{
		sum += a[j];
		j += (size - 1);
	}
	printf("%d\n", sum);

}
