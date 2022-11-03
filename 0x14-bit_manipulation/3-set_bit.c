#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 * @n: the memory address of the provided number
 * @index: position of the bit to set
 *
 * Return: 1 if the set has been a success -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int upper_limit;

	upper_limit = sizeof(unsigned long int) * 8;
	if (index >= upper_limit)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
