#include <stdlib.h>
/**
 * print_name - prints a name specified by function pointer
 * @name: name to be displayed
 * @f: function pointer tht specifies format of the display
 *
 * Return: no return value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
