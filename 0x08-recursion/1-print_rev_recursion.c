#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * _print_rev_recursion - check the code
 * @s: string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char *ss = (char *) malloc((strlen(s) - 1) * sizeof(char));

	if (strlen(s) - 1 < 0 || strcmp(s, "") == 0)
	{
		return;
	}
	if (s[strlen(s) - 1] != 1 + '0' && s[strlen(s) - 1] != 'A')
		_putchar(s[strlen(s) - 1]);
	_print_rev_recursion(strncpy(ss, s, strlen(s) - 1));
}

