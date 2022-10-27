#include "lists.h"

/**
 * free_listint2 - frees the memory allocated for the linked list
 * @head: pointer to the pointer to the first node of the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		listint_t *current_node;

		while (*head)
		{
			current_node = (*head)->next;
			free(*head);
			*head = current_node;
		}
	}
}
