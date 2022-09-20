#include "main.h"

/**
 * main - entry point of code
 * Return: Always zero
 */


int main(void)
{
	int array[5];

	int array1[1] = {
		980
	};
	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;

	print_array(array1, -1);
	print_array(array, 5);
	return (0);
}
