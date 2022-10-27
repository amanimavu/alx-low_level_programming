#include "lists.h"

/**
 * get_nodeint_at_index -  retrieves list from node of position index
 * @head: pointer to the first node of the list
 * @index: position of the node to be retrieved
 *
 * Return: node list from index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *node_frm_index = head;

	for (counter = 0; counter < index; counter++)
	{
		if (node_frm_index)
			node_frm_index = node_frm_index->next;
	}
	return (node_frm_index);
}
