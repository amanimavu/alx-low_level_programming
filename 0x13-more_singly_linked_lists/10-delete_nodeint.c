#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: double pointer to the first node
 * @index: the position of the node to be deleted
 *
 * Return: 1 if success -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_bfr_idx = *head;
	listint_t *node_aft_idx;
	listint_t *temp;
	unsigned int count;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
	}
	else
	{
		for (count = 0; count < index - 1; count++)
		{
			node_bfr_idx = node_bfr_idx->next;
			if (!node_bfr_idx)
				return (-1);
		}

		node_aft_idx = node_bfr_idx->next->next;
		free(node_bfr_idx->next);

		if (node_aft_idx)
			node_bfr_idx->next = node_aft_idx;
		else
			node_bfr_idx->next = NULL;
	}
	return (1);
}
