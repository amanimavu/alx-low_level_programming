#include <stdio.h>
/**
 * main - entry point of the program
 * Description: program display all digits
 * of the hexadecimal
 *
 * Return: always return 0
 */
int main(void)
{
	int digit;
	int alphabet;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	for (alphabet = 'a'; alphabet < 'g'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
