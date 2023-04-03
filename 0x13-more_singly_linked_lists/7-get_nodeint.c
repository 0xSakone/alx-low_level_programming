#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node by index
 * Description: no description
 * @head: head node
 * @index: integer index
 * Return: number node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *node = (listint_t *) head;

	while (node != NULL)
	{
		if (i == (int)index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
