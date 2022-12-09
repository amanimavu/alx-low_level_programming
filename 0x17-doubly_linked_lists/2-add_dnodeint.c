#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a node at the beginning of the list
 * @head: pointer to the head node of the list
 * @n: data of the new node
 *
 * Return: memory address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
