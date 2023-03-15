#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - entry function
 * @ac: integer
 * @av: array
 * Return: strings
 */
char *argstostr(int ac, char **av)
{
	char *b;
	int i, t, c, m = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		m += strlen(av[i]);
	b = malloc(m + ac + 1);
	if (b != NULL)
	{
		i = 0;
		c = 0;
		while (i < ac)
		{
			t = 0;
			while (t < (int) strlen(av[i]))
			{
				b[c] = av[i][t];
				t++;
				c++;
			}
			b[c] = '\n';
			c++;
			i++;
		}
	}
	else
	{
		free(b);
		return (NULL);
	}
	return (b);
}
