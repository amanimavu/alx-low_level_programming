#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	char *str1, *str2, *str3;

	str1 = "My first strlen!";
	str2 = "";
	str3 = "Holberton!";

	_putchar('y');

	print_rev(str1);
	print_rev(str2);
	print_rev(str3);
	return (0);
}
