#include "lists.h"

/**
 * add_nodeint - add a node at top
 * Description: no description
 * @head: previous node
 * @n: n
 * Return: number node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
