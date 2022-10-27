#include "lists.h"

/**
 * free_listint2 - frees the memory allocated for the linked list
 * @head: pointer to the pointer to the first node of the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next_node;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
