#include "lists.h"

/**
 * sum_dlistint - sums all data from the nodes in the list
 * @head: pointer to the head of the node list
 *
 * Return: sum from the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	int sum;

	sum = 0;
	current_node = head;
	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
