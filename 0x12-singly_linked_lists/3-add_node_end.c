#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to the pointer of type list_t
 * @str: string to be included as value of a new node
 *
 * Return: pointer to the end node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *current_node = *head;

	end_node = malloc(sizeof(list_t));

	if (!end_node)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;

	if (!current_node)
	{
		*head  = end_node;
	}
	else
	{
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = end_node;
	}
	return (end_node);
}
