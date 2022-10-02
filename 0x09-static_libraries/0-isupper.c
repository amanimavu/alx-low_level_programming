/**
 * _isupper - checks whether is upper case
 * @letter: letter of the alphabet that is of type int
 * Return: 1 if letter is uppercase 0 otherwise
 */

int _isupper(int letter)
{
	if (letter >= 65 && letter <= 90)
		return (1);
	else
		return (0);
}
