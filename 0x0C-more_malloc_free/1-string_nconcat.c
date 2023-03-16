#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - entry function
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	int i, u;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + n;
	b = malloc(size + 1);

	if (b != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			b[i] = s1[i];
			i++;
		}
		u = 0;
		while (u < (int) n)
		{
			b[i] = s2[u];
			u++;
			i++;
		}
	}
	return (b);
}
