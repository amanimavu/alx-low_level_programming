#include "lists.h"

/**
 * list_len - gets the number of elements in a list
 * @h: a pointer to a list_t (linked list)
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
