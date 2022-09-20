#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	char *str1, *str2;

	str1 = "0123456789";
	str2 = "012345678";

	puts_half(str1);
	puts_half(str2);

	return (0);
}
