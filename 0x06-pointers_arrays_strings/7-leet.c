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
	char *ptr = NULL;
	char *ptr2 = NULL;

	for (i = 0; i < 5; i++)
	{
		u = -1;
		while (u != '\0')
		{
			u = s1[n];
			ptr = strchr(s1, leetA[i]);
			ptr2 = strchr(s1, leetAA[i]);
			if (ptr != NULL)
				*ptr = leetV[i];
			else if (ptr2 != NULL)
				*ptr2 = leetV[i];
			n++;
		}
	}
	return (s1);
}
