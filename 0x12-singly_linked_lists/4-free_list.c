#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - print all print list
 * Description: no description
 * @head: head node
 * Return: number node
 */
void free_list(list_t *head)
{
	list_t *next;

	while ((next = head) != NULL)
	{
		head = head->next;
		free(next->str);
		free(next);
	}
	free(next);
	free(head);
}
