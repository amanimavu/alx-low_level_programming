#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t list
 * @h: pointer to a list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
			printf("[%lu] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
