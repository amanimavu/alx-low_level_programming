#include "main.h"

/**
 * jack_bauer - prints every minute of 24hr
 * Description: A nested for loop is used to go
 * through each and every minute of 24 hours
 *
 * Return: has no return value
 */

void jack_bauer(void)
{
	int hrs_2;
	int hrs_1;
	int min_2;
	int min_1;
	int upper_limit_2;

	for (hrs_2 = 0; hrs_2 < 3; hrs_2++)
	{
		upper_limit_2 = (hrs_2 < 2) ? 10 : 4;
		for (hrs_1 = 0; hrs_1 < upper_limit_2; hrs_1++)
		{
			for (min_2 = 0; min_2 < 6; min_2++)
			{
				for (min_1 = 0; min_1 < 10; min_1++)
				{
					_putchar(hrs_2 + '0');
					_putchar(hrs_1 + '0');
					_putchar(':');
					_putchar(min_2 + '0');
					_putchar(min_1 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
