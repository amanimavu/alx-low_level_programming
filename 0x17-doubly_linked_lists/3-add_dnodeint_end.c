#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to the head node
 * @n: data to be held in the node
 *
 * Return: memory address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	if (current)
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = current;
	return (new_node);
}
