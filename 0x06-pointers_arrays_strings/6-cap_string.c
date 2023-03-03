#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * cap_string - capitalize all string
 * @s1: string to change touper
 * Return: string
 */
char *cap_string(char *s1)
{
	int i = -1, n = 0, r = -1;
	char symbols[] = ",;.!?\"(){} \t\n";

	while (i != '\0')
	{
		i = (int)s1[n];
		if (r == -1)
		{
			s1[n] = (char)toupper(i);
			r = 0;
		}
		if (strchr(symbols, s1[n]) != NULL)
			r = -1;
		n++;
	}
	return (s1);
}
