#include <string.h>
#include "main.h"

/**
 * two_pow_n - finds the powe n of 2
 * @n: the indice
 *
 * Return: the power of 2
 */
unsigned int two_pow_n(int n)
{
	if (n == 0)
		return (1);
	else
		return (2 * two_pow_n(n - 1));
}

/**
 * binary_to_uint - converts the binary string to decimal
 * @b: string conataining a binary number
 *
 * Return: the corresponding decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, len;

	if (!b)
		return (0);
	len = strlen(b);
	for (i = len - 1; i > -1; i--)
	{
		if (b[i] == '1')
			result += two_pow_n((len - 1) - i);
		else if (b[i] == '0')
			continue;
		else
			return (0);
	}
	return (result);
}
