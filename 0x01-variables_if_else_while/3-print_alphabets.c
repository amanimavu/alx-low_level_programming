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
	char alphabet_l;
	char alphabet_u;

	for (alphabet_l = 'a'; alphabet_l <= 'z'; alphabet_l++)
		putchar(alphabet_l);
	for (alphabet_u = 'A'; alphabet_u <= 'Z'; alphabet_u++)
		putchar(alphabet_u);
	putchar('\n');

	return (0);
}
