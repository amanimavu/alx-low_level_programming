#include <stdio.h>
/**
 * main - entry point of program
 * Description: program tht displays digit
 * of base 10
 *
 * Return: always return a 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%i", digit);
	putchar('\n');
	return (0);
}
