#include <stdio.h>
/**
 * main - entry point of the program
 * Description: program displays text using
 * fprintf on standard error
 *
 * Return: 1(FAILURE) is always returned
 */
int main(void)
{
	char str1[25] = "and that piece of art is";
	char str2[25] = "Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s useful\" - %s", str1, str2);
	return (1);
}
