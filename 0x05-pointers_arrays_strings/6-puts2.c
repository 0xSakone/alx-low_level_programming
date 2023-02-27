#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print text odd index
 * @s: given string
 * Return: nothing
 */
void puts2(char *s)
{
	int i;

	for (i = 0; i <= (int)strlen(s) - 1; i++)
	{
		if (i % 2 == 0 || i == 0)
			_putchar(*(s + i));
	}
	_putchar('\n');
}
