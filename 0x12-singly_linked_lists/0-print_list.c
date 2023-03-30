#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all print list
 * Description: no description
 * @h: head node
 * Return: number node
 */
size_t print_list(const list_t *h)
{
	int n = 0;
	list_t *node = (list_t *) h;

	while (node != NULL)
	{
		n++;
		if (node->str == NULL)
		{
			node->str = "(nil)";
			node->len = 0;
		}
		printf("[%d] %s\n", node->len, node->str);
		node = node->next;
	}
	return (n);
}
