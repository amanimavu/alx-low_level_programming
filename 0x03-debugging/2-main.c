#include <stdio.h>
#include "main.h"

/**
 * main - print the largest of 3 integers
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 500;
	b = 500;
	c = 400;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
