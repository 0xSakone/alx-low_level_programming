#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - print all print list
 * @head: head node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head;
		head = head->next;
		free(next);
	}
	free(head);
}
