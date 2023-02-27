#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - print given string reversed
 * @s: given string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len;
	char c;

	len = strlen(s) - 1;
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i];
		s[len - i] = c;
	}
}
