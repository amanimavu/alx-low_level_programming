#include <stdio.h>
/**
 * main - entry point of the program
 * Description: program displays digint in
 * ascending order with coma seperating them
 *
 * Return: always retur 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
