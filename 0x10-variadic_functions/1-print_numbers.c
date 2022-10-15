#include <stdarg.h>

/**
 * print_numbers - prints a list of numbers
 * given as arguments
 * @separator: string that separates the numbers
 * @n: argument count
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
