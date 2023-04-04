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
	listint_t *next;

	if (*head == NULL)
		return (0);
	node = *head;
	n = node->n;
	if (node->next == NULL)
	{
		free(node);
		return (n);
	}
	next = node->next;
	free(node);
	*head = next;
	return (n);
}
