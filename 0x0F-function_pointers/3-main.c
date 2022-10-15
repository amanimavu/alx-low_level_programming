#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1, num2, result;
		char *sign;
		int (*operation)(int, int);

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		sign = argv[2];

		if (((*argv[1] != '0' && num1) || *argv[1] == '0')
		&& ((*argv[3] != '0' && num2) || *argv[3] == '0'))
		{
			operation = get_op_func(sign);
			if (operation)
			{
				result = operation(num1, num2);
				printf("%d\n", result);
			}
			else
			{
				printf("Error\n");
				exit(99);
			}
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
