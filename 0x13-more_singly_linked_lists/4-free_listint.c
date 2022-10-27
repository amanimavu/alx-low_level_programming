#include "lists.h"

/**
 * free_listint - frees the memory allocated for the linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp_h;

	temp_h = head;
	if (temp_h)
	{
		listint_t *current_node;

		while (temp_h)
		{
			current_node = temp_h->next;
			free(temp_h);
			temp_h = current_node;
		}
	}
}
