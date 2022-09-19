/**
 * swap_int - swaps the values of 2 variables
 * @a: fisrt parameter that's a pointer of type int
 * @b: second parameter that's a pointer of type int
 *
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
