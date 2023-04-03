#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get the len of linked list
 * Description: no description
 * @h: head node
 * Return: number node
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;
	listint_t *node = (listint_t *) h;

	while (node != NULL)
	{
		n++;
		node = node->next;
	}
	return (n);
}
