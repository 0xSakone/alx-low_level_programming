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
	list_t *next = NULL;

	if (head->next == NULL)
	{
		if (head->str)
			free(head->str);
		free(head)
		return;
	}

	while (head != NULL)
	{
		free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
	free(next);
	free(head);
}
