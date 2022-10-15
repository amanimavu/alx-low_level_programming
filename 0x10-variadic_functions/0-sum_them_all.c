#include <stdarg.h>
/**
 * sum_them_all - sums up all arguments
 * @n: argument count
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	sum = 0;
	if (n == 0)
		return (0);
	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
	}
	return (sum);
}
