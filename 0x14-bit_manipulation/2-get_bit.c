#include "main.h"

/**
 * get_bit - returns the value aof a bit at a given index
 * @n: number supplied
 * @index: position to check the value
 *
 * Return: value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int len;
	unsigned long int n_copy = n;

	for (len = 0; n_copy != 0; len++)
		n_copy >>= 1;
	if (index >= len)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
