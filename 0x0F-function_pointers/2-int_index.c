/**
 * int_index - searches for an integer from an array
 * @array: array of integers that is searched
 * @size: length of array
 * @cmp: comparison function
 *
 * Return: index of the first matching integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
}
