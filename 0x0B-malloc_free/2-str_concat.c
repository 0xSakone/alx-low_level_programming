#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - entry function
 * @s1: string
 * @s2: string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *b;
	int i, u;
	int size;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1) + strlen(s2);
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
		while (s2[u] != '\0')
		{
			b[i] = s2[u];
			u++;
			i++;
		}
	}
	return (b);
}
