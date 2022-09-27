#include "main.h"

/**
 * main - entry point of program
 * Return: Always zero
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);

	return (0);
}
