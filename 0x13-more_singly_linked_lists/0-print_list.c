#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all print list
 * Description: no description
 * @h: head node
 * Return: number node
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;
	listint_t *node = (listint_t *) h;

	while (node != NULL)
	{
		n++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (n);
}
