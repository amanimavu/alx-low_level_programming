#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - evaluates the product of two argments of type int
 * @argc: command line argument count
 * @argv: 1-D array of command line argument of type int
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
