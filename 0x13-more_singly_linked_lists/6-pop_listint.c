#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the first node
 *
 * Return: data value of the head node
 */

int pop_listint(listint_t **head)
{
	int head_node_data;

	if (*head)
	{
		listint_t *new_head_node = (*head)->next;

		head_node_data = (*head)->n;
		free(*head);
		*head = new_head_node;
		return (head_node_data);
	}
	return (0);
}
