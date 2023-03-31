#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - print all print list
 * @head: head node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head;
		head = head->next;
		free(next->str);
		free(next);
	}
	free(head);
}
