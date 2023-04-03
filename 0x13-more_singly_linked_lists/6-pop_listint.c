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
	listint_t *node = malloc(sizeof(listint_t));

	node = *head;
	n = node->n;
	*head = node->next;
	return (n);
}
