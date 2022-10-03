#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - displays the result of summation of 2 numbers
 * @argc: command line argument count
 * @argv: 1-D array of command line arguments
 * Return: alway 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
