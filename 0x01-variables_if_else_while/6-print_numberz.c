#include <stdio.h>
/**
 * main - entry point of the program
 * Description: program displays digits of
 * base 10 using putchar
 *
 * Return: always return 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
