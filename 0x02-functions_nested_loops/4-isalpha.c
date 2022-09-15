#include "main.h"

/**
 * _isalpha - checks is a character is an alphabet
 * @c: int type parameter
 * Description: uses a if...else condition and ASCII to check
 * wether sa char is an alphabet
 *
 * Return: 1 if character is alphabet 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 90) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
