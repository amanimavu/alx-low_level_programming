#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print the data in the nodes
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
