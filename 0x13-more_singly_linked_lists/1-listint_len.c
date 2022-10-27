#include "lists.h"

/**
 * listint_len - gets the number of elements in a linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
