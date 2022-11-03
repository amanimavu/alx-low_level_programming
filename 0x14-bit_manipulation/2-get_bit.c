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
	unsigned int long upper_limit;

	upper_limit = sizeof(unsigned long int) * 8;
	if (index >= upper_limit)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
