#include <stdio.h>
#include "main.h"

/**
 * leet - transform string to leet
 * @s1: string to change touper
 * Return: string
 */
char *leet(char *s1)
{
	int i = -1, n = 0;

	while (i != '\0')
	{
		i = (int)s1[n];
		if (s1[n] == 'a' || s1[n] == 'A')
			s1[n] = '4';
		if (s1[n] == 'e' || s1[n] == 'E')
			s1[n] = '3';
		if (s1[n] == 'o' || s1[n] == 'O')
			s1[n] = '0';
		if (s1[n] == 't' || s1[n] == 'T')
			s1[n] = '7';
		if (s1[n] == 'l' || s1[n] == 'L')
			s1[n] = '1';
		n++;
	}
	return (s1);
}
