#include "lists.h"

/**
 * add_node - add a node at top
 * Description: no description
 * @head: previous node
 * @str: strings
 * Return: number node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	node->str = strdup((char *)str);
	node->len = _strlen((char *)str);
	if (head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}

	if (node->str == NULL)
	{
		node->str = "(nil)";
		node->len = 0;
	}
	return (node);
}
