#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments pased into it
 * @argc: count of the command line arguments
 * @argv: 1-D array of command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
