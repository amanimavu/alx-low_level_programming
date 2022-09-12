#include <stdio.h>
/**
 * main - entry poinyt of the program
 * Description: program displays alphabets in
 * reverse order z-a
 *
 * Return: always return 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
