#include "lists.h"

/**
 * dlistint_len - traverse the list and return the number of node
 * @h: pointer to the head node of list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
