#include "main.h"

/**
 * print_last_digit - prints the lats digit of a number
 * @num: int type parameter as input with is a number
 *
 * Description: begins by evaluating the absolute value
 * the uses modulus to get the last digit and prints the digit
 * Return: returns the last digit
 */

int print_last_digit(int num)
{
	int abs_num;
	int last_digit;

	if(num < 0)
		abs_num = num * -1;
	else
		abs_num = num;
	last_digit = abs_num % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
