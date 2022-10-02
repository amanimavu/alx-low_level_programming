#include "main.h"

/**
 * _islower - checks is a letter is lower case
 * @c: parameter of type int that is to be checked
 * Description: uses conditional logic if...else to
 * determin if input is lower case
 *
 * Return: 1 if c is lowercase or 0 if c is uppercase
 **/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
