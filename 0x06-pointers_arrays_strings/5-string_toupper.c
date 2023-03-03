#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - make uppercase toupper
 * @s1: string to change touper
 * Return: string
 */
char *string_toupper(char *s1)
{
	int i = -1, n = 0;

	while (i != '\0')
	{
		i = (int)s1[n];
		s1[n] = (char)toupper(i);
		n++;
	}
	return (s1);
}
