#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - remove first node and return value
 * @head: head node
 * @index: integer index
 * Return: nothing
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i = 0;
	listint_t *node = (listint_t *) *head;
	listint_t *prev_node = malloc(sizeof(listint_t));

	while (node != NULL)
	{
		if (i == (int)index)
		{
			if (prev_node != NULL)
			{
				prev_node->next = node->next;
				free(node);
			}
			else
			{
				prev_node = node;
				*head = node->next;
				free(node);
			}
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
