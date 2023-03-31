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
