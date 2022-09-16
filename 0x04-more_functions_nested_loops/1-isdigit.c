/**
 * _isdigit - checks whether a character is a digit
 * @character: int type parameter
 * Description: uses if else to check if character is
 * between 48-57
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int character)
{
	if (character >= 48 && character <= 57)
		return (1);
	else
		return (0);
}
