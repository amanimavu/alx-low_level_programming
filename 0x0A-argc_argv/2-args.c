#include <stdio.h>

/**
 * main - prints every command line argument, each on a newline
 * @argc: command line argument count
 * @argv: a 1-D array of command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
