#include <stdio.h>
/**
 * main - entry point of the program
 * Description: program print the alphabets
 * in lower case followed by newline
 *
 * Return: always return 0 (SUCCESS)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		putchar('\n');
	}
	return (0);
}
