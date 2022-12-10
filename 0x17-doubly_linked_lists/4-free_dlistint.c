#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - free the linked list
 * @head: pointer to the head node
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;
	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
