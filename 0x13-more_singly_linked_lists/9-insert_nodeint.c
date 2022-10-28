#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to the first node
 * @idx: index at which node is to be inserted (starts at 0)
 * @n: value to be stores in the new node
 *
 * Return: memory address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_bfr_idx = *head;
	listint_t *node_aft_idx;
	unsigned int count;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		for (count = 0; count < idx - 1; count++)
			node_bfr_idx = node_bfr_idx->next;

		node_aft_idx = node_bfr_idx->next;
		node_bfr_idx->next = new_node;

		if (node_aft_idx)
			new_node->next = node_aft_idx;
		else
			new_node->next = NULL;
	}
	return (new_node);
}
