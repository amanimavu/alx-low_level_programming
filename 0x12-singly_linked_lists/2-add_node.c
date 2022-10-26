#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node a the beginning of a list_t list
 * @head: pointer to the pointer of the list
 * @str: string for the new node
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;

	first_node = malloc(sizeof(list_t));
	if (!first_node)
		return (NULL);
	first_node->str = strdup(str);
	first_node->len = strlen(str);
	first_node->next = *head;
	*head = first_node;

	return (*head);
}
