#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program assigned to
 * it when called on the terminal
 * @argc: count of command line arguments
 * @argv: array of command line arguments
 * Return: Always 0
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
