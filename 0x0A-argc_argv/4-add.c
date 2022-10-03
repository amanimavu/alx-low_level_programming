#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays the result of summation of 2 numbers
 * @argc: command line argument count
 * @argv: 1-D array of command line arguments
 * Return: 0 when the program is sucess 1 when error is met
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		char *endptr;
		sum += strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
