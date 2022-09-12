#include <stdio.h>
/**
 * main - entry point of the program
 * Description - program that displays all alphabet
 * except q and e
 *
 * Return: always return 0 (SUCCESS)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
