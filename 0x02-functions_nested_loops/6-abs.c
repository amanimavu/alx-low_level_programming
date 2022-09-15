/**
 * _abs - computes the absolute value of an integer
 * @x: int type parameter
 *
 * Description: uses if...else logic to determine whether
 * an integer is +ve, -ve or 0. Multipling -ve integers with -
 * Return: return the absolute value of input
 */

int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
