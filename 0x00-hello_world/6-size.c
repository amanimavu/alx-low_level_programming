#include <stdio.h>
/**
 * main - entry point of the program
 * Decsription: the program is written to display
 * sizes of different data types
 * Return: a value of zero is returned from main
 */
int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf("Size of an int: %lu", sizeof(int));
	printf("Size of long int: %lu", sizeof(long));
	printf("Size of a long long int: %lu", sizeof(long long));
	printf("Size of a float: %lu", sizeof(float));
}
