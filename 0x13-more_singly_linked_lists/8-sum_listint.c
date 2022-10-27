#include "lists.h"

/**
 * sum_listint - gets the sum sof all the data of a list
 * @head: pointer to the first node of list
 *
 * Return: sum of all he data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
