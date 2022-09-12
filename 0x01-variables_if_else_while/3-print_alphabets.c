#include <stdio.h>
/**
 * main - entry point of the program
 * Description: program print the alphabets in lower
 * and upper cap
 *
 * Return: always return a 0 (SUCCESS)
 */
int main(void)
{
	char alphabet;
	char ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
