#include <stdio.h>

/**
 * Fizz_Buzz - print Fizz, Buzz or FizzBuzz under certain conditions
 *
 * Return: No return value
*/

void Fizz_Buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}

/**
 * main - entry point of program
 * Return: Always 0
 */

int main(void)
{
	Fizz_Buzz();
	return (0);
}


