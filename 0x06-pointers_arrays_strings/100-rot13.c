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
	char ptr[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ptr2[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char c;

	u = s1[0];
	do {
		u = s1[i];
		for (n = 0; n <= 51; n++)
		{
			c = ptr[n];
			if (u == c)
			{
				s1[i] = ptr2[n];
				break;
			}
		}
		i++;
	} while (u != '\0');
	return (s1);
}
