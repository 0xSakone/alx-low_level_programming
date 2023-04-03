#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - get node by index
 * Description: no description
 * @head: head node
 * @idx: integer index
 * @n: integer n
 * Return: number node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 0;
	listint_t *node = (listint_t *) *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	while (node != NULL)
	{
		if (i + 1 == (int)idx)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
