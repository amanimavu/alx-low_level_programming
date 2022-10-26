#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp_h = head;

	if (temp_h)
	{
		list_t *next_head;

		while (temp_h)
		{
			next_head = temp_h->next;
			free(temp_h->str);
			free(temp_h);
			temp_h = next_head;
		}
	}
}
