#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - get node by index
 * Description: no description
 * @head: head node
 * Return: number node
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *node = (listint_t *) head;

	while (node != NULL)
	{
		i += node->n;
		node = node->next;
	}
	return (i);
}
