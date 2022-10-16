#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings given as arguments
 * @separator: string that separates the argument strings
 * @n: number of string argument
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, int))
			printf("%s", va_arg(ap, int));
		else
			printf("(nill)");
		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
