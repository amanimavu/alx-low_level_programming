#include "main.h"

/**
 * main - entry point of program
 *
 * Return: Always 0
 */

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 's');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
