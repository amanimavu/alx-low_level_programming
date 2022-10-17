#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - simple implementation of the printf
 * @format: format of the string
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;/*ap - argument poiter*/
	char c, temp, *str;
	int i;
	size_t counter = 0;
	float f;

	va_start(ap, format);
	while (counter < strlen(format))
	{
		temp = *(format + counter);
		switch (temp)
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 's':
				str = va_arg(ap, char*);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
		}
		if ((temp == 'c' || temp == 'i' || temp == 's' || temp == 'f')
		&& counter < strlen(format) - 1)
			printf(", ");
		counter++;
	}
	printf("\n");
}
