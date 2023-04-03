#include "lists.h"

/**
 * add_nodeint_end - add a node at end
 * Description: no description
 * @head: previous node
 * @n: integer number
 * Return: number node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *current = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
		*head = node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}

	return (node);
}
