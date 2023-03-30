#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - get the len of linked list
 * Description: no description
 * @h: head node
 * Return: number node
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	list_t *node = (list_t *) h;

	while (node != NULL)
	{
		n++;
		node = node->next;
	}
	return (n);
}
