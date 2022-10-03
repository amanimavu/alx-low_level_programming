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
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) || *argv[i] == 48)
			{
				sum += atoi(argv[i]);
			}
			if ((*argv[i] != 48 && !atoi(argv[i])) || *argv[i] < 48)
			{
				printf("Error\n");
				return (1);
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
