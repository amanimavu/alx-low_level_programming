#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index in the list
 * @h: pointer to the head of the node list
 * @idx: index to insert the node
 * @n: data to be included in the new node
 *
 * Return: memory address of the new node inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node, *memory, *new_node;
	unsigned int count;

	if (idx == 0)
	{
		memory = add_dnodeint(h, n);
		return (memory);
	}
	current_node = *h;
	count = 0;
	while (current_node)
	{
		if (count == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->prev = current_node->prev;
			new_node->next = current_node;
			(current_node->prev)->next = new_node;
			current_node->prev = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		count++;
	}
	if (count == idx)
	{
		memory = add_dnodeint_end(h, n);
		return (memory);
	}
	return (NULL);
}
