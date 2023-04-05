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
	int headnode;
	listint_t *temp;
	listint_t *list;

	if (*head == NULL)
		return (0);
	list = *head;

	headnode = list->n;

	temp = list->next;

	free(list);

	*head = temp;

	return (headnode);
}
