#include "lists.h"

/**
 * add_node_end - add a node at end
 * Description: no description
 * @head: previous node
 * @str: strings
 * Return: number node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *current = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup((char *)str);
	node->len = _strlen((char *)str);
	if (*head == NULL)
		*head = node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}

	if (node->str == NULL)
	{
		node->str = "(nil)";
		node->len = 0;
	}
	return (node);
}
