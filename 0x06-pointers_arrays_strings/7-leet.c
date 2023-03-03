#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * leet - transform string to leet
 * @s1: string to change touper
 * Return: string
 */
char *leet(char *s1)
{
	int i, u = -1, n = 0;
	char leetA[] = "aeotl";
	char leetAA[] = "AEOTL";
	char leetV[] = "43071";

	for (i = 0; i < 5; i++)
	{
		u = -1;
		n = 0;
		while (u != '\0')
		{
			u = s1[n];
			if (s1[n] == leetA[i] || s1[n] == leetAA[i])
			{
				s1[n] = leetV[i];
			}
			n++;
		}
	}
	return (s1);
}
