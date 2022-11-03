#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number whose bit is to be set
 * @index: position of the bit to be set
 *
 * Return: 1 if success -1 in the case of failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int upper_limit;

	upper_limit = sizeof(unsigned long int) * 8;
	if (index >= upper_limit)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
