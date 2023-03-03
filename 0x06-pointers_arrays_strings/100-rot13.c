#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - text root 13
 * @s1: string to change touper
 * Return: string
 */
char *rot13(char *s1)
{
	int i = 0, u = -1, n = 0;
	char ptr[80] = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
	char alpha2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";
	char c;

	strcat(ptr, alpha2);
	while (u != '\0')
	{
		u = s1[i];
		for (n = 0; n <= 80; n++)
		{
			c = ptr[n];
			if (u == c)
			{
				s1[i] = ptr[n + 13];
				break;
			}
		}
		i++;
	}
	return (s1);
}
