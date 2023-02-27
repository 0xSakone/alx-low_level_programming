#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - print last n of half
 * @s: given string
 * Return: nothing
 */
void puts_half(char *s)
{
	int i, n;

	n = ((int)strlen(s) - 1) / 2;
	for (i = n + 1; i <= (int)strlen(s) - 1; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
