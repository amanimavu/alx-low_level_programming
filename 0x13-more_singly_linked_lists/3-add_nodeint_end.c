#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: double pointer to the first node of the list
 * @n: integer value to assign to the new node
 *
 * Return: pointerto the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end_node;

	new_end_node = malloc(sizeof(listint_t));
	if (!new_end_node)
		return (NULL);
	new_end_node->n = n;
	new_end_node->next = NULL;

	if (*head)
	{
		*head = new_end_node;
	}
	else
	{
		listint *current_node = *head;

		while (current_node->next)
			current_node = current_node->next;
		current_node->next = new_node_node;
	}
	return (new_end_node);
}
