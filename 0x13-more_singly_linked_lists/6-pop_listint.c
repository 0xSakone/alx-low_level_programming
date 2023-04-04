#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - remove first node and return value
 * @head: head node
 * Return: n poped integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node;

	if (*head == NULL)
		return (0);
	node = *head;
	n = node->n;
	if (node->next == NULL)
	{
		head = NULL;
		free(node);
		return (n);
	}
	*head = node->next;
	free(node);
	node = NULL;
	return (n);
}
