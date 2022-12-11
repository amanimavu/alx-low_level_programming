#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at the given index
 * @head: pointer to the head of the node list
 * @index: index of the node to retrieve
 *
 * Return: memory address of the node gotten
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int count;

	current_node = head;
	for (count = 0; current_node; count++)
	{
		if (count == index)
			return (current_node);
		current_node = current_node->next;
	}
	return (NULL);
}
