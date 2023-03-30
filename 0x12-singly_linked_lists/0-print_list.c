#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * string_format - string text formater
 * @s: string
 * Return: nothing
 */
void string_format(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

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
		_putchar('[');
		_putchar('0' + node->len);
		_putchar(']');
		_putchar(' ');
		string_format(node->str);
		_putchar('\n');
		node = node->next;
	}
	return (n);
}
