#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the node list
 * @index: index of the node to delete
 *
 * Return: 1 if success or -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *next_node;
	unsigned int count;

	current_node = *head;
	if (current_node && index == 0)
	{
		next_node = current_node->next;
		free(current_node);
		if (next_node)
			next_node->prev = NULL;
		*head = next_node;
		return (1);
	}
	count = 0;
	while (current_node)
	{
		if (count == index)
		{
			if (!(current_node->next))
			{
				current_node = current_node->prev;
				free(current_node->next);
				current_node->next = NULL;
			}
			else
			{
				next_node = current_node->next;
				current_node = current_node->prev;
				free(current_node->next);
				current_node->next = next_node;
				next_node->prev = current_node;
			}
			return (1);
		}
		current_node = current_node->next;
		count++;
	}
	return (-1);
}
