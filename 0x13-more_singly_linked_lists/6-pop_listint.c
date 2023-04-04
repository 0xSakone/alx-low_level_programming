#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - remove first node and return value
 * @head: head node
 * Return: nothing
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	node = *head;
	if (*head == NULL)
		return (0);
	n = node->n;
	if (node->next == NULL)
	{
		free(node);
		free(head);
		return (n);
	}
	*head = node->next;
	free(node);
	node = NULL;
	return (n);
}
