#include "main.h"
#include <string.h>

/**
 * check_str - check if a string is a palindrome using recursion
 * @str: string to be checked
 * @len: length of str
 * @i: iterator
 * Return: 1 if string is palindrome, 0 otherwise
 */

int check_str(char *str, int len, int i)
{
	if (i <= len)
	{
		if (*(str + i) != *(str + len))
			return (0);
		return (check_str(str, len - 1, i + 1));
	}
	return (1);
}

/**
 * is_palindrome - contains a function that check if a string is palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len, i;

	len = strlen(s) - 1;
	return (check_str(s, len, i = 0));
}
