#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - print all print list
 * @head: head node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *node = (listint_t *) *head;

	if (head == NULL)
	{
		free(next);
		free(node);
		return;
	}
	while (node)
	{
		next = node;
		node = node->next;
		free(next);
	}
	free(node);
	*head = NULL;
}
