#include <stdio.h>
#include "main.h"

/**
 * print_rev - print given string reversed
 * @s: given string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
