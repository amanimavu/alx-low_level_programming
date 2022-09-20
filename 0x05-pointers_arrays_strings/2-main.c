#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	char *str1, *str2, *str3;
	int len1, len2, len3;

	str1 = "My first strlen!";
	str2 = "";
	str3 = "Holberton!";
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len3 = _strlen(str3);

	printf("%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", len3);

	return (0);
}
