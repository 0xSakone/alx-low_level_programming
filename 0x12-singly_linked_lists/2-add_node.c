#include "lists.h"

/**
 * _strlen - finds and outputs length of string
 * @s: pointer to string.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}


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

	if (node == NULL)
	{
		return (NULL);
	}
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
