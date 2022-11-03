#include "main.h"

/**
 * flip_bits - counts the number of but to be flipped to get from
 * one number to another
 * @n: one of the given number
 * @m: the other given number
 *
 * Return: count of bits that will be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j, larger_num, count = 0;

	larger_num = n > m ? n : m;
	for (j = 0; larger_num != 0; j++)
		larger_num >>= 1;
	for (i = 0; i < j; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
		else
			continue;
	}
	return (count);
}
